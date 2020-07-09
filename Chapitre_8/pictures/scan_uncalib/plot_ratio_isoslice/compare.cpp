#include <stdio.h>
#include<iostream>
#include<string>
#include <algorithm>
#include "TFile.h"
#include "TROOT.h"
#include "TObject.h"
#include "TH1F.h"
#include "TH1.h"
#include "TMinuit.h"
#include "THStack.h"
#include "TLegend.h"
#include "TCanvas.h"
#include "TSystem.h"
#include "TLine.h"
#include <cstdlib>
#include <cmath>
#include "TFile.h"
#include "TCanvas.h"
#include <THStack.h>
#include <TStyle.h>
#include <TF1.h>
#include "colors.h"
using namespace std;

vector< string > split( string str, string pattern) {
    vector<string> result;
    string::size_type temp;
    std::string::size_type sz;
    cout<<str<<endl;
    if(pattern.empty()) return result;
    str = str+pattern;
    int size = str.size();
    for(int i =0; i< size; i++ ){
        temp = str.find(pattern,i);
        if( temp<size){
            string s = str.substr(i,temp-i);
            result.push_back(s);
            i=temp+pattern.size()-1;
            }
        }
    return result;
    }

int compare(){
	int do_log = 0;
	string path_dt;
	string path_z;
	string path_dibo;
	string path_top;
	string path_wlv;
	string path_wtau;
	string path_mj;
	string inputlist;
	string ch;
	string subdir;
	ifstream in1; 
	in1.open("./config");
	getline(in1, inputlist);
	getline(in1, ch);
	getline(in1, subdir);
//	inputlist = "inputlist";
//	subdir = "pic/";
	in1.close();
	string kine[]= {"leppt","lepeta","pfo_met","pfo_mT", "boson_pT"};
	string kinename[]= {"lep pT[GeV]","lep eta", "pfo_met[GeV]","pfo_mT[GeV]", "WpT[GeV]"};
        string kineunion[]= {"Entries/GeV","Entries/0.2","Entries/GeV","Entries/GeV","Entries/GeV"};	
	string iso[] = {"0.1", "0.2", "0.3", "0.4"};
	int nplot =5;
	string var[5];
	for (int i = 0; i < nplot;i++)
		var[i] = "hist/"+kine[i];


	ifstream in;
	in.open(inputlist.c_str());

	TEnv *m_set = new TEnv();
	m_set->ReadFile(inputlist.c_str(),EEnvLevel(0));
	vector<string> p_data = split(m_set->GetValue("data_path",""), " ");
	vector<string> p_ew = split(m_set->GetValue("ew_path",""), " ");
	vector<TFile *> f_data, f_ew;
	vector<TH1F *> h_data, h_ew, h_mj, h_ratio;
	for( int i =0; i< p_data.size(); i++){
		TFile * _data =  new TFile( (p_data.at(i)).c_str() );
		TFile * _ew =  new TFile( (p_ew.at(i)).c_str() );
		f_data.push_back(_data);
		f_ew.push_back(_ew);
		}
	in.close();

	for(int i=0;i<nplot;i++){
        TCanvas *MyC = new TCanvas("MyC","Data MC Compare",10,10,700,700);
		h_data.clear();
		h_ew.clear();
		h_mj.clear();
		h_ratio.clear();
        gStyle->SetOptStat(kFALSE);
		const char*  kinenom = var[i].c_str();
		const char*  kineName= kinename[i].c_str();
		const char*  kineUnion= kineunion[i].c_str();
		for(int a =0; a< f_data.size(); a++){
			 TH1F *hdt = (TH1F*)(f_data.at(a))->Get(kinenom);			
			 TH1F *hew = (TH1F*)(f_ew.at(a))->Get(kinenom);			
			 TH1F *hmj = (TH1F *)((TH1F*)(f_data.at(a))->Get(kinenom))->Clone(("MJ_"+iso[a]+kinename[i]).c_str());				
			hmj->Add(hew, -1);
			hmj->Scale(1./hmj->Integral());
	if(kine[i] == "pfo_met")  hmj->RebinX(3);
		hmj->SetMarkerSize(0.7);
		hmj->SetLineColor(a+2);	
			h_data.push_back(hdt);
			h_ew.push_back(hew);
			h_mj.push_back(hmj);
			}
		for(int a = 0; a < f_data.size()-1; a++){
			TH1F *_ratio =(TH1F *) (h_mj.at(a))->Clone(("ratio_"+iso[a]+kinename[i]).c_str());
			_ratio->Divide(h_mj.at(a+1));		
			h_ratio.push_back(_ratio);	
			}
		TH1F *hmj_delta1 = (TH1F *) h_mj.at(0)->Clone(Form("mjdelta1_%d",i));
		TH1F *hmj_delta2 = (TH1F *) h_mj.at(1)->Clone(Form("mjdelta2_%d",i));
		TH1F *hmj_0 = (TH1F *) h_mj.at(0)->Clone(Form("mjzero_%d",i));
		hmj_delta1->Add(h_mj.at(1), -1.);
		hmj_delta2->Add(h_mj.at(2), -1.);
		hmj_0->Add(hmj_delta1, 0.5);
		hmj_0->Add(hmj_delta2, 0.5);
		hmj_0->SetLineColor(kBlack);
		h_mj.at(0)->SetXTitle(kineName) ;
		h_mj.at(0)->SetYTitle("Normalization") ;
		for(int j =1; j <= hmj_0->GetNbinsX(); j ++)  hmj_0->SetBinError(j, (hmj_delta1->GetBinContent(j)+hmj_delta2->GetBinContent(j))/2.);

	h_mj.at(0)->Draw("HIST");
	h_mj.at(1)->Draw("HISTsame");
	h_mj.at(2)->Draw("HISTsame");
	hmj_0->Draw("HISTsame");
//		(h_ratio.at(0))->SetMaximum(2.);
//		(h_ratio.at(0))->SetMinimum(0.);
//		(h_ratio.at(0))->SetMarkerColor(1);
//		(h_ratio.at(0))->Draw("");
//	cout<< " test 1" <<endl;
			        TLegend * leg = new TLegend(0.65,0.65,0.9,0.9);
        leg->SetBorderSize(0);

	        leg->AddEntry(hmj_0,("evaluated mj in 0.-"+iso[0]).c_str(),"L");
	        leg->AddEntry(h_mj.at(0),("mj in "+iso[0]+"-"+iso[1]).c_str(),"L");
	        leg->AddEntry(h_mj.at(1),("mj in "+iso[1]+"-"+iso[2]).c_str(),"L");
	        leg->AddEntry(h_mj.at(2),("mj in "+iso[2]+"-"+iso[3]).c_str(),"L");
	      //  leg->AddEntry(htop,"TOP","f");
	leg->Draw("same");
	cout<< " test 1" <<endl;
		 string pic=subdir+"/"+kine[i]+".png";
	cout<< " test 1" <<endl;
		const char* plotpath = pic.c_str();
	cout<< " test 1" <<endl;
    leg->Draw();
                TLatex l; //l.SetTextAlign(12); l.SetTextSize(tsize); 
                l.SetNDC();
    l.SetTextFont(43); l.SetTextSize(20);
        //        l.SetTextFont(72);
                l.SetTextColor(kBlack);
      l.DrawLatex(0.5,0.48,("W #rightarrow"+ ch+"#nu").c_str());
    l.DrawLatex(0.5,0.41,"MJ profile in control regions");

	MyC->Update();
		MyC->SaveAs(plotpath);
	cout<< " test 1" <<endl;
		delete MyC;
  }


	for(int i=0;i<nplot;i++){
        TCanvas *MyC = new TCanvas("MyC","Data MC Compare",10,10,700,700);
		h_data.clear();
		h_ew.clear();
		h_mj.clear();
		h_ratio.clear();
        gStyle->SetOptStat(kFALSE);
		const char*  kinenom = var[i].c_str();
		const char*  kineName= kinename[i].c_str();
		const char*  kineUnion= kineunion[i].c_str();
		for(int a =0; a< f_data.size(); a++){
			 TH1F *hdt = (TH1F*)(f_data.at(a))->Get(kinenom);			
			 TH1F *hew = (TH1F*)(f_ew.at(a))->Get(kinenom);			
			 TH1F *hmj = (TH1F *)((TH1F*)(f_data.at(a))->Get(kinenom))->Clone(("MJ_"+iso[a]+kinename[i]).c_str());				
			hmj->Add(hew, -1);
			hmj->Scale(1./hmj->Integral());
//			hmj->RebinX(5);
	if(kine[i] == "lepeta")  hmj->RebinX(5);
		hmj->SetMarkerSize(0.7);
		hmj->SetMarkerColor(a+2);	
			h_data.push_back(hdt);
			h_ew.push_back(hew);
			h_mj.push_back(hmj);
			}
		for(int a = 1; a < f_data.size(); a++){
			TH1F *_ratio =(TH1F *) (h_mj.at(a))->Clone(("ratio_"+iso[a]+kinename[i]).c_str());
		_ratio->SetMarkerColor(a+2);	
			_ratio->Divide(h_mj.at(a-1));
			h_ratio.push_back(_ratio);	
			}
		(h_ratio.at(0))->SetMaximum(2.0);
		(h_ratio.at(0))->SetMinimum(0.0);
		h_ratio.at(0)->SetXTitle(kineName) ;
//	h_ratio.at(0)->SetAxisRange(0,20.);
//	 h_ratio.at(0)->GetXaxis()->SetRange(1,10);
	h_ratio.at(0)->Draw("E");
	h_ratio.at(1)->Draw("Esame");
//	h_ratio.at(3)->Draw("Esame");
//		(h_ratio.at(0))->SetMaximum(2.);
//		(h_ratio.at(0))->SetMinimum(0.);
//		(h_ratio.at(0))->SetMarkerColor(1);
///		(h_ratio.at(0))->Draw("");
//	cout<< " test 1" <<endl;
			        TLegend * leg = new TLegend(0.6,0.78,0.9,0.9);
        leg->SetBorderSize(0);

	        leg->AddEntry(h_ratio.at(0),("ratio "+iso[0]+"-"+iso[1]+"/"+iso[0]+"-"+iso[1]).c_str(),"P");
	        leg->AddEntry(h_ratio.at(1),("ratio "+iso[1]+"-"+iso[2]+"/"+iso[0]+"-"+iso[1]).c_str(),"P");
	      //  leg->AddEntry(htop,"TOP","f");
	leg->Draw("same");
		 string pic=subdir+"/ratio_"+kine[i]+".png";
		const char* plotpath = pic.c_str();
	MyC->Update();
		MyC->SaveAs(plotpath);
		delete MyC;
	}
return 0;
}


