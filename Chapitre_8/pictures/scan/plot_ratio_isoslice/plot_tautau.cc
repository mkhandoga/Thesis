#include "TROOT.h"
#include "TObject.h"
#include "TChain.h"
#include "TH1F.h"
#include "TMinuit.h"
#include "THStack.h"
#include "TLegend.h"
#include "TCanvas.h"
#include "TSystem.h"
#include "TLine.h"
#include "colors.h"
#include "lumi.h"
#include <cstdlib>
#include <cmath>
#include "TFile.h"
#include "TCanvas.h"
#include <THStack.h>
#include <TStyle.h>
#include <TF1.h>
using namespace std;

const Double_t GeV=1000;
const Double_t PI=3.1415926536;

// ntuple vars:
UInt_t   RunNumber;
UInt_t   EventNumber;
Float_t  weight;
Float_t  weightErr;

Int_t    nLep;
Int_t    kLep[2];   //[nLep]
Float_t  eLep[2];   //[nLep]
Float_t  ptLep[2];   //[nLep]
Float_t  pxLep[2];   //[nLep]
Float_t  pyLep[2];   //[nLep]
Float_t  pzLep[2];   //[nLep]
Float_t  etaLep[2];   //[nLep]
Float_t  phiLep[2];   //[nLep]
Float_t  chargeLep[2];   //[nLep]

Int_t    nJet;
Float_t  mJet[100];
Float_t  eJet[100];
Float_t  pJet[100];
Float_t  ptJet[100];
Float_t  pxJet[100];
Float_t  pyJet[100];
Float_t  pzJet[100];
Float_t  etaJet[100];
Float_t  phiJet[100];
Float_t  jvtxfJet[100];
Float_t  smearJet[100];
Float_t  JESErrNp1Jet[100];
Float_t  JESErrNp2Jet[100];
Float_t  JESErrNp3Jet[100];
Float_t  JESErrNp4Jet[100];
Float_t  JESErrNp5Jet[100];
Float_t  JESErrNp6Jet[100];
Float_t  JESErrNp7Jet[100];
Float_t  JESErrNp8Jet[100];
Float_t  JESErrNp9Jet[100];
Float_t  JESErrNp10Jet[100];
Float_t  JESErrNp11Jet[100];
Float_t  JESErrNp12Jet[100];
Float_t  JESErrNp13Jet[100];
Float_t  JESErrNp14Jet[100];
Float_t  JESErrNp15Jet[100];
Float_t  JESErrPileUpMuJet[100];
Float_t  JESErrPileUpNPVJet[100];
Float_t  JESErrClosebyJet[100];
Float_t  JESErrFlvCmpJet[100];
Float_t  JESErrFlvRspJet[100];
Float_t  JESErrBJet[100];
Float_t  tagJet_MV1[100];
Float_t  tagJet_MV1_SF[100];
Float_t  tagJet_MV1_SFerr[100];
Int_t    tagJet_truth_label[100];
Float_t  detaJJ;
Float_t  pxMiss;
Float_t  pyMiss;
Float_t  pxMiss_softScaleUp;
Float_t  pyMiss_softScaleUp;
Float_t  pxMiss_softScaleDown;
Float_t  pyMiss_softScaleDown;
Float_t  pxMiss_softRecoSys;
Float_t  pyMiss_softRecoSys;
Float_t  mH_mmc;

Int_t    cat;

// new vars:
Float_t  mLL;

Float_t  mJJ;
Float_t  dphiLL;
Float_t  ptMiss;
Float_t  ptJ1;

Float_t  ptJ2;
Float_t  pxMiss_hpto;
Float_t  pyMiss_hpto;
Float_t  ptMiss_hpto;
Bool_t   hasBjet;
Float_t  weight_b;

// config vars:
Int_t nbin(20);
Float_t xlo(0), xhi(300);
const char* titleX = "E_{T}^{miss} [GeV]";
const char* titleY = "Entries/GeV";
Bool_t doSys = true;
Bool_t showSig = true;

// plotted var:

/*Float_t var() {
  Float_t ivm = sqrt(pow(eLep[0]+eLep[1],2)-pow(pxLep[0]+pxLep[1],2)-pow(pyLep[0]+pyLep[1],2)-pow(pzLep[0]+pzLep[1],2));
  ivm=ivm/GeV;
  if(ivm >= xhi) ivm = xhi*0.999999;
  if(ivm < xlo) ivm = xlo;
  return ivm;}*/
/*float Calcux1()
{
  float phi1 = phiLep[0] , phi2 = phiLep[1] ;
  float theta1 = 2*atan(exp(etaLep[0])) ;
  float theta2 = 2*atan(exp(etaLep[1])) ;

  float pNeutrino1 = ((pxMiss*sin(phi2)-pyMiss*cos(phi2))/(cos(phi1)*sin(phi2)-sin(phi1)*cos(phi2)))/sin(theta1) ;
  float pLep1 =  sqrt(pow(pxLep[0],2)+pow(pyLep[0],2)+pow(pzLep[0],2)) ;
  return pLep1/(pLep1+pNeutrino1) ;
}
float Calcux2()
{
  float phi1 = phiLep[0] , phi2 = phiLep[1] ;
  float theta1 = 2*atan(exp(etaLep[0])) ;
  float theta2 = 2*atan(exp(etaLep[1])) ;
  float pNeutrino2 = ((pxMiss*sin(phi1)-pyMiss*cos(phi1))/(cos(phi2)*sin(phi1)-sin(phi2)*cos(phi1)))/sin(theta2) ;
  float pLep2 =  sqrt(pow(pxLep[1],2)+pow(pyLep[1],2)+pow(pzLep[1],2)) ;
  return pLep2/(pLep2+pNeutrino2) ;
}*/
float Calcux1()
{
  float para1 = (pyLep[0]/pxLep[0]);
  float para2 = (pyLep[1]/pxLep[1]) ;
  float px1= (pxMiss_hpto*para2-pyMiss_hpto)/(para2-para1) ;
  return fabs(pxLep[0]/((pxLep[0])+px1));
}
float Calcux2()
{
  float para1 = pyLep[0]/pxLep[0]; 
  float para2 = pyLep[1]/pxLep[1] ;
  float px2= (pyMiss_hpto-para1*pxMiss_hpto)/(para2-para1) ;
  return fabs(pxLep[1]/(pxLep[1]+px2));
}

Float_t var() {
  Float_t tmp = mH_mmc/GeV;
  if(tmp >= xhi) tmp = xhi*0.999999;
  if(tmp < xlo) tmp = xlo;
printf("%f\n",tmp);
  return tmp;
}

Double_t Max(Double_t a, Double_t b) {
  if(a>b) return a;
  else return b;
}

Double_t Min(Double_t a, Double_t b) {
  if(a<b) return a;
  else return b;
}

//Bool_t Pass() {

//return Pass1()&&Pass2()&&Pass3()&&Pass4();}

Bool_t Pass1() {
  return ((abs(kLep[0])==abs(kLep[1]) && mLL/GeV>30 && mLL/GeV<75)||(abs(kLep[0])!=abs(kLep[1]) && mLL/GeV>30 && mLL/GeV<100));
}

Bool_t Pass2() {
return ((ptLep[0]+ptLep[1])/GeV>35 );
}

Bool_t Pass3() {
return (ptJ1/GeV>40);
}

Bool_t Pass4() {
return (!hasBjet);
}


Bool_t Pass5() {
return ((ptMiss>40*GeV && ptMiss_hpto>40*GeV&&(abs(kLep[0])==abs(kLep[1])))||(ptMiss>20*GeV &&(abs(kLep[0])!=abs(kLep[1]))));
}

Bool_t Pass6() {
return (Calcux1()>0.1&&Calcux1()<1&&Calcux2()>0.1&&Calcux2()<1);
}


Bool_t Pass7() {
return (dphiLL<2.5);
}


Bool_t Pass8() {
return (ptJ2/GeV>25);
}

Bool_t Pass9() {
return (detaJJ>2.5);
}

Bool_t Pass10() {
return (mJJ>300);
}
Bool_t Pass() {

return (Pass1()&&Pass2()&&Pass3()&&Pass4()&&Pass5()&&Pass6()&&Pass7()&&Pass8&&Pass9()&&Pass10());}
//Bool_t Pass() {
//  return abs(kLep[0])!=abs(kLep[1]) && ((abs(kLep[0])==abs(kLep[1]) && mLL/GeV>30 && mLL/GeV<75) || (abs(kLep[0])!=abs(kLep[1]) && mLL/GeV>30 && mLL/GeV<100)) && (ptLep[0]+ptLep[1])/GeV>35 && ptJ1/GeV>40 && !hasBjet;
//}
void CalcVars(Bool_t Bwt=true) {
  mLL = sqrt(pow(eLep[0]+eLep[1],2)-pow(pxLep[0]+pxLep[1],2)-pow(pyLep[0]+pyLep[1],2)-pow(pzLep[0]+pzLep[1],2));
  dphiLL = fabs(phiLep[0]-phiLep[1]);
  ptMiss = sqrt(pow(pxMiss,2)+pow(pyMiss,2));

  int iJ1 = -1;
  int iJ2 = -1;
  int k=0;
  Float_t maxPt1 = -999999;
  Float_t maxPt2 = -999999;
  for(Int_t j=0; j<nJet; j++) {
    if(fabs(etaJet[j])>=2.4 || fabs(jvtxfJet[j])>0.75) {
      if(ptJet[j]>maxPt1) {
        iJ2=iJ1;
	maxPt2 = maxPt1;
	maxPt1 = ptJet[j];
	iJ1 = j;
      }
	else {
		if(ptJet[j]>maxPt2){
			iJ2=j;
			maxPt2 = ptJet[j];}
	}

    }
  }
  if(iJ1>=0) ptJ1 = ptJet[iJ1];
  if(iJ2>=0) ptJ2 = ptJet[iJ2];
if((iJ1>=0)&&(iJ2>=0))
 mJJ = sqrt(pow(eJet[iJ1]+eJet[iJ2],2)-pow(pxJet[iJ1]+pxJet[iJ2],2)-pow(pyJet[iJ1]+pyJet[iJ2],2)-pow(pzJet[iJ1]+pzJet[iJ2],2))/GeV;

  pxMiss_hpto = -pxLep[0]-pxLep[1];
  pyMiss_hpto = -pyLep[0]-pyLep[1];
  for(Int_t j=0; j<nJet; j++) {
    if(fabs(etaJet[j])>=2.4 || fabs(jvtxfJet[j])>0.75) {
      if(ptJet[j]/GeV>25) {
  	pxMiss_hpto -= pxJet[j];
  	pyMiss_hpto -= pyJet[j];
      }
    }
  }
  ptMiss_hpto = sqrt(pow(pxMiss_hpto,2)+pow(pyMiss_hpto,2));

  hasBjet = false;
  weight_b = 1;
  for(Int_t j=0; j<nJet; j++) {
    if(fabs(etaJet[j])>=2.4 || fabs(jvtxfJet[j])>0.75) {
      if(fabs(etaJet[j])<2.5 && ptJet[j]/GeV>25 && tagJet_MV1[j]>0.601713) hasBjet = true;
      if(fabs(etaJet[j])<2.5 && ptJet[j]/GeV>25) weight_b *= tagJet_MV1_SF[j]; 
    }
  }
  if(Bwt) weight *= weight_b; // note: when no b-falvor cut in Pass(), do not apply
}

void VaryJESMET(Int_t opt) {
  if(opt==23) {
    pxMiss = pxMiss_softScaleUp;
    pyMiss = pyMiss_softScaleUp;
  }
  else if(opt==24) {
    pxMiss = pxMiss_softScaleDown;
    pyMiss = pyMiss_softScaleDown;
  }
  else if(opt==25) {
    pxMiss = pxMiss_softRecoSys;
    pyMiss = pyMiss_softRecoSys;
  }
}

void SetAddress(TChain& ch) {
  ch.SetBranchAddress("weight", &weight);
  ch.SetBranchAddress("weightErr", &weightErr);

  ch.SetBranchAddress("nLep", &nLep);
  ch.SetBranchAddress("kLep", kLep);
  ch.SetBranchAddress("eLep", eLep);
  ch.SetBranchAddress("ptLep", ptLep);
  ch.SetBranchAddress("pxLep", pxLep);
  ch.SetBranchAddress("pyLep", pyLep);
  ch.SetBranchAddress("pzLep", pzLep);
  ch.SetBranchAddress("etaLep", etaLep);
  ch.SetBranchAddress("phiLep", phiLep);
  ch.SetBranchAddress("chargeLep", chargeLep);

  ch.SetBranchAddress("nJet", &nJet);
  ch.SetBranchAddress("mJet", mJet);
  ch.SetBranchAddress("eJet", eJet);
  ch.SetBranchAddress("pJet", pJet);
  ch.SetBranchAddress("ptJet", ptJet);
  ch.SetBranchAddress("pxJet", pxJet);
  ch.SetBranchAddress("pyJet", pyJet);
  ch.SetBranchAddress("pzJet", pzJet);
  ch.SetBranchAddress("etaJet", etaJet);
  ch.SetBranchAddress("phiJet", phiJet);
  ch.SetBranchAddress("jvtxfJet", jvtxfJet);
  ch.SetBranchAddress("smearJet", smearJet);
  if(ch.GetBranch("JESErrNp1Jet")) ch.SetBranchAddress("JESErrNp1Jet", JESErrNp1Jet);
  if(ch.GetBranch("JESErrNp2Jet")) ch.SetBranchAddress("JESErrNp2Jet", JESErrNp2Jet);
  if(ch.GetBranch("JESErrNp3Jet")) ch.SetBranchAddress("JESErrNp3Jet", JESErrNp3Jet);
  if(ch.GetBranch("JESErrNp4Jet")) ch.SetBranchAddress("JESErrNp4Jet", JESErrNp4Jet);
  if(ch.GetBranch("JESErrNp5Jet")) ch.SetBranchAddress("JESErrNp5Jet", JESErrNp5Jet);
  if(ch.GetBranch("JESErrNp6Jet")) ch.SetBranchAddress("JESErrNp6Jet", JESErrNp6Jet);
  if(ch.GetBranch("JESErrNp7Jet")) ch.SetBranchAddress("JESErrNp7Jet", JESErrNp7Jet);
  if(ch.GetBranch("JESErrNp8Jet")) ch.SetBranchAddress("JESErrNp8Jet", JESErrNp8Jet);
  if(ch.GetBranch("JESErrNp9Jet")) ch.SetBranchAddress("JESErrNp9Jet", JESErrNp9Jet);
  if(ch.GetBranch("JESErrNp10Jet")) ch.SetBranchAddress("JESErrNp10Jet", JESErrNp10Jet);
  if(ch.GetBranch("JESErrNp11Jet")) ch.SetBranchAddress("JESErrNp11Jet", JESErrNp11Jet);
  if(ch.GetBranch("JESErrNp12Jet")) ch.SetBranchAddress("JESErrNp12Jet", JESErrNp12Jet);
  if(ch.GetBranch("JESErrNp13Jet")) ch.SetBranchAddress("JESErrNp13Jet", JESErrNp13Jet);
  if(ch.GetBranch("JESErrNp14Jet")) ch.SetBranchAddress("JESErrNp14Jet", JESErrNp14Jet);
  if(ch.GetBranch("JESErrNp15Jet")) ch.SetBranchAddress("JESErrNp15Jet", JESErrNp15Jet);
  if(ch.GetBranch("JESErrPileUpMuJet")) ch.SetBranchAddress("JESErrPileUpMuJet", JESErrPileUpMuJet);
  if(ch.GetBranch("JESErrPileUpNPVJet")) ch.SetBranchAddress("JESErrPileUpNPVJet", JESErrPileUpNPVJet);
  if(ch.GetBranch("JESErrClosebyJet")) ch.SetBranchAddress("JESErrClosebyJet", JESErrClosebyJet);
  if(ch.GetBranch("JESErrFlvCmpJet")) ch.SetBranchAddress("JESErrFlvCmpJet", JESErrFlvCmpJet);
  if(ch.GetBranch("JESErrFlvRspJet")) ch.SetBranchAddress("JESErrFlvRspJet", JESErrFlvRspJet);
  if(ch.GetBranch("JESErrBJet")) ch.SetBranchAddress("JESErrBJet", JESErrBJet);
  ch.SetBranchAddress("tagJet_MV1", tagJet_MV1);
  ch.SetBranchAddress("tagJet_MV1_SF", tagJet_MV1_SF);
  ch.SetBranchAddress("tagJet_MV1_SFerr", tagJet_MV1_SFerr);
  if(ch.GetBranch("tagJet_truth_label")) ch.SetBranchAddress("tagJet_truth_label", tagJet_truth_label);

  ch.SetBranchAddress("pxMiss", &pxMiss);
  ch.SetBranchAddress("pyMiss", &pyMiss);
  ch.SetBranchAddress("pxMiss_softScaleUp", &pxMiss_softScaleUp);
  ch.SetBranchAddress("pyMiss_softScaleUp", &pyMiss_softScaleUp);
  ch.SetBranchAddress("pxMiss_softScaleDown", &pxMiss_softScaleDown);
  ch.SetBranchAddress("pyMiss_softScaleDown", &pyMiss_softScaleDown);
  ch.SetBranchAddress("pxMiss_softRecoSys", &pxMiss_softRecoSys);
  ch.SetBranchAddress("pyMiss_softRecoSys", &pyMiss_softRecoSys);
  ch.SetBranchAddress("mH_mmc", &mH_mmc);
  ch.SetBranchAddress("cat", &cat);
}

void SetMax(TH1* h1, TH1* h2, Double_t scale=1.0) {
  h1->SetMaximum(scale*Max(h1->GetMaximum(),h2->GetMaximum()));
  h2->SetMaximum(scale*Max(h1->GetMaximum(),h2->GetMaximum()));
}

void SetMax(THStack* h1, TH1* h2, Double_t scale=1.0) {
  h1->SetMaximum(scale*Max(h1->GetMaximum(),h2->GetMaximum()));
  h2->SetMaximum(scale*Max(h1->GetMaximum(),h2->GetMaximum()));
}

void plot() {
  char str[200];

  TChain ch1("ntp");
  ch1.Add("ntuple/top.root");
  SetAddress(ch1);

  TChain ch2("ntp");
  ch2.Add("ntuple/zee.root");
  ch2.Add("ntuple/zmumu.root");
  SetAddress(ch2);

  TChain ch3("ntp");
  ch3.Add("ntuple/embed.root");
  SetAddress(ch3);

  TChain ch3_a("ntp");
  ch3_a.Add("ntuple/embed_mfsdn.root");
  SetAddress(ch3_a);

  TChain ch3_b("ntp");
  ch3_b.Add("ntuple/embed_mfsup.root");
  SetAddress(ch3_b);

  TChain ch3_c("ntp");
  ch3_c.Add("ntuple/embed_noiso.root");
  SetAddress(ch3_c);

  TChain ch3_d("ntp");
  ch3_d.Add("ntuple/embed_tightiso.root");
  SetAddress(ch3_d);

  TChain ch4("ntp");
  ch4.Add("ntuple/diboson.root");
  SetAddress(ch4);

  TChain ch5("ntp");
  ch5.Add("ntuple/fake.root");
  SetAddress(ch5);

  TChain chd("ntp");
  chd.Add("ntuple/data.root");
  SetAddress(chd);

  TChain ch6("ntp");
  ch6.Add("ntuple/sig.root");
  SetAddress(ch6);

  TH1F* h1  = new TH1F("h1","",nbin,xlo,xhi);  //top2L
  TH1F* h4  = new TH1F("h4","",nbin,xlo,xhi);  //Zee,Zmumu
  TH1F* h5  = new TH1F("h5","",nbin,xlo,xhi);  //Ztautau
  TH1F* h6  = new TH1F("h6","",nbin,xlo,xhi);  //diboson
  TH1F* h7  = new TH1F("h7","",nbin,xlo,xhi);  //sig
  TH1F* hdt = new TH1F("hdt","",nbin,xlo,xhi);  //data
  TH1F* hf  = new TH1F("hf","",nbin,xlo,xhi);  // fake
  TH1F* hratio   = new TH1F("hratio","",nbin,xlo,xhi);
  TH1F* hratiomc = new TH1F("hratiomc","",nbin,xlo,xhi);
  TH1F* bcgr  = new TH1F("bcgr","",nbin,xlo,xhi);  // backr
 h1->SetFillColor(topStyle[0]);
 h1->SetFillStyle(topStyle[1]);
 h1->SetLineColor(topStyle[2]);
 h1->SetLineStyle(topStyle[3]);

 h4->SetFillColor(zllStyle[0]);
 h4->SetFillStyle(zllStyle[1]);
 h4->SetLineColor(zllStyle[2]);
 h4->SetLineStyle(zllStyle[3]);

 h5->SetFillColor(zttStyle[0]);
 h5->SetFillStyle(zttStyle[1]);
 h5->SetLineColor(zttStyle[2]);
 h5->SetLineStyle(zttStyle[3]);

 h6->SetFillColor(dbsStyle[0]);
 h6->SetFillStyle(dbsStyle[1]);
 h6->SetLineColor(dbsStyle[2]);
 h6->SetLineStyle(dbsStyle[3]);

// h7->SetFillColor(sigStyle[0]);
 h7->SetFillStyle(sigStyle[1]);
 h7->SetLineColor(sigStyle[2]);
 h7->SetLineStyle(sigStyle[3]);

 hf->SetFillColor(fakStyle[0]);
 hf->SetFillStyle(fakStyle[1]);
 hf->SetLineColor(fakStyle[2]);
 hf->SetLineStyle(fakStyle[3]);

 hdt->SetFillColor(hwwStyle[0]);
 hdt->SetFillStyle(hwwStyle[1]);
 hdt->SetLineColor(hwwStyle[2]);
 hdt->SetLineStyle(hwwStyle[3]);
TLegend * leg = new TLegend(0.55,0.55,0.98,0.98);
leg->AddEntry(h6,"diboson","f");
leg->AddEntry(h1,"top(2L)","f");
leg->AddEntry(h4,"z->ee,mumu+jets","f");
leg->AddEntry(h5,"z->tautaut+jets","f");
leg->AddEntry(hf,"Fake leptons","f");
leg->AddEntry(h7,"50XH(125)->tautau","l");
leg->AddEntry(hdt,"DATA","EL");
  h1->Sumw2();
  h4->Sumw2();
  h5->Sumw2();
  h6->Sumw2();
  h7->Sumw2();
  hf->Sumw2();
  bcgr->Sumw2();
  /*
  hsys[0]: weight sys
  hsys[3-5]: b-tag/b-veo
  hsys[6-47]: JES
  hsys[48]: JER
  hsys[49-51]: MET soft term
  hsys[58-61]: embed sys
  hsys[62-65]: fake sys
  hsys[67]: total sys
  */
  TH1F* hsys[68];
  if(doSys) {
    for(int i=0; i<68; i++) {
      sprintf(str,"hsys%d",i+1);
      hsys[i] = new TH1F(str,"",nbin,xlo,xhi);
      hsys[i]->Sumw2();
    }
  }

  // data
  for(Int_t i=0;i<Int_t(chd.GetEntries());i++) {
    chd.GetEntry(i);
    CalcVars(0);
    if(Pass()) {
      hdt->Fill(var());
    }
  }

  // MC
  TChain* pChain[3] = {&ch1,&ch2,&ch4};

  for(Int_t iCh=0; iCh<3; iCh++) {
    for(Int_t entry=0;entry<Int_t(pChain[iCh]->GetEntries());entry++) {
      pChain[iCh]->GetEntry(entry);
      CalcVars();
      if(Pass()) {
	if(iCh==0) {
	  h1->Fill(var(),weight);
	}
	else if(iCh==1) {
	  h4->Fill(var(),weight);
	}
	else if(iCh==2) {
	  h6->Fill(var(),weight);
	}

	if(doSys) {
	  hsys[0]->Fill(var(),weight*weightErr);

	  Float_t weight_b_err[3] = {0,0,0};
	  for(Int_t j=0; j<nJet; j++) {
	    if(fabs(etaJet[j])>=2.4 || fabs(jvtxfJet[j])>0.75) {
	      if(fabs(etaJet[j])<2.5 && ptJet[j]/GeV>25) {
		if(tagJet_truth_label[j]==5) {
		  weight_b_err[0] += fabs(tagJet_MV1_SFerr[j])/tagJet_MV1_SF[j];
		}
		else if(tagJet_truth_label[j]==4 || tagJet_truth_label[j]==15) {
		  weight_b_err[1] += fabs(tagJet_MV1_SFerr[j])/tagJet_MV1_SF[j];
		}
		else if(tagJet_truth_label[j]==0) {
		  weight_b_err[2] += fabs(tagJet_MV1_SFerr[j])/tagJet_MV1_SF[j];
		}
	      }
	    }
	  }
	  hsys[3]->Fill(var(),weight*weight_b_err[0]);
	  hsys[4]->Fill(var(),weight*weight_b_err[1]);
	  hsys[5]->Fill(var(),weight*weight_b_err[2]);
	}
      }

      if(doSys) {
        for(Int_t j=23; j<=25; j++) {
          VaryJESMET(j);
          CalcVars(0);
          if(Pass()) hsys[26+j]->Fill(var(),weight);
        }
      }
    }
  }

  // embed
  for(Int_t i=0;i<Int_t(ch3.GetEntries());i++) {
    ch3.GetEntry(i);
    CalcVars(0);
    if(Pass()) {
      h5->Fill(var(),weight);
    }
  }

  if(doSys) {
    TChain* pEmb[4] = {&ch3_a,&ch3_b,&ch3_c,&ch3_d};
    for(Int_t c=0; c<4; c++) {
      for(Int_t i=0;i<Int_t(pEmb[c]->GetEntries());i++) {
	pEmb[c]->GetEntry(i);
	CalcVars(0);
	if(Pass()) {
	  hsys[58+c]->Fill(var(),weight);
	}
      }
    }
  }

  // fake
  for(Int_t i=0;i<Int_t(ch5.GetEntries());i++) {
    ch5.GetEntry(i);
    CalcVars();

    if(Pass()) {
      hf->Fill(var(),weight);

      if(doSys) {
	if(abs(kLep[0])==11 && abs(kLep[1])==11)      hsys[62]->Fill(var(),weight*weightErr);
	else if(abs(kLep[0])==11 && abs(kLep[1])==13) hsys[63]->Fill(var(),weight*weightErr);
	else if(abs(kLep[0])==13 && abs(kLep[1])==11) hsys[64]->Fill(var(),weight*weightErr);
	else if(abs(kLep[0])==13 && abs(kLep[1])==13) hsys[65]->Fill(var(),weight*weightErr);
      }
    }
  }

  // sig
  for(Int_t i=0;i<Int_t(ch6.GetEntries());i++) {
    ch6.GetEntry(i);
    CalcVars();

    if(Pass()) {
      if(cat==1125 || cat==2125 || cat==3125 || cat==4125) h7->Fill(var(),weight*50);
    }
  }

  if(doSys) {
    for(Int_t i=1; i<=nbin; i++) {
      Float_t val = 0;
      for(Int_t j=0; j<=5; j++) {
	val += pow(hsys[j]->GetBinContent(i),2);
      }
      for(Int_t j=49; j<=51; j++) {
      	val += pow(hsys[j]->GetBinContent(i)-h1->GetBinContent(i)-h4->GetBinContent(i)-h6->GetBinContent(i),2);
      }
      for(Int_t j=1; j<=2; j++) {
      	Float_t val1 = pow(hsys[2*j+56]->GetBinContent(i)-h5->GetBinContent(i),2);
      	Float_t val2 = pow(hsys[2*j+57]->GetBinContent(i)-h5->GetBinContent(i),2);
	val += Max(val1,val2);
      }
      for(Int_t j=62; j<=65; j++) {
	val += pow(hsys[j]->GetBinContent(i),2);
      }
      hsys[67]->SetBinContent(i,sqrt(val));
    }
  }

  printf("     top:%3.1f\n",h1->Integral());
  printf("zee,mumu:%3.1f\n",h4->Integral());
  printf("  ztatau:%3.1f\n",h5->Integral());
  printf(" diboson:%3.1f\n",h6->Integral());
  printf("    fake:%3.1f\n",hf->Integral());
  printf(" tot bkg:%3.1f\n",h1->Integral()+h4->Integral()+h5->Integral()+h6->Integral()+hf->Integral());
  printf(" tot sig:%3.1f\n",h7->Integral()/50);
  printf("    data:%3.1f\n",hdt->Integral());
TCanvas MyC = new TCanvas("MyC","Test canvas",10,10,700,700);
   TPad *pad2 = new TPad("pad2", "pad2", 0, 0.05, 1, 0.3);
//  cst->UseCurrentStyle();
   TPad *pad1 = new TPad("pad1", "pad1", 0, 0.3, 1, 1.0);
pad1->SetBottomMargin(0);
pad1->Draw();
pad2->Draw();
pad1->SetBottomMargin(0);
pad1->cd();

 gStyle->SetOptStat(kFALSE);
   THStack *stack = new THStack("Stack","");
   stack->Add(hf) ;
   stack->Add(h6) ;
   stack->Add(h1) ;
   stack->Add(h4) ;
   stack->Add(h5) ;
bcgr->Add(h1);
bcgr->Add(h4);
bcgr->Add(h6);
bcgr->Add(hf);
bcgr->Add(h5);
hratio->Divide(hdt,bcgr);
hdt -> SetXTitle(titleX);
hdt -> SetYTitle(titleY);
stack->Draw("HIST");
h7->Draw("HIST,same");
hdt->Draw("E,same");
/*h5->Draw("HIST,same");
hf->Draw("HIST,same");
h1->Draw("HIST,same");
h6->Draw("HIST,same");
h7->Draw("HIST,same");
h4->Draw("HIST,same");*/
leg->Draw();
pad2->cd();
   pad2->SetBottomMargin(0.3);
   pad2->SetGridx();
   pad2->SetGridy();
   TF1* line  = new TF1("line","1",0,1); 
   line->SetLineWidth(0.5) ;
   //   hdt2->SetTitleSize(hdt->GetTitleSize("Y"),"Y") ;
      hratio->SetYTitle("Data/Bkg") ;
      hratio->SetXTitle("mH_mmc/GeV") ;
      hratio->SetTitleSize(0.1,"X") ;
      hratio->SetTitleSize(0.1,"Y") ;
      hratio->SetAxisRange(0.7,1.4,"Y") ;
      hratio->GetXaxis()->SetLabelSize(0.12) ;
      hratio->GetYaxis()->SetLabelSize(0.12) ;
//hsys[67]->Draw("HIST,same");*/
hratio->Draw("E");
   line->Draw("same") ;
MyC.SaveAs("mll.png");

}
