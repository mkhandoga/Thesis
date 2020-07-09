void testFit()
{
//=========Macro generated from canvas: myc/Fitting 3 TGraphErrors with linear functions
//=========  (Tue Nov 27 12:35:46 2018) by ROOT version6.04/16
   TCanvas *myc = new TCanvas("myc", "Fitting 3 TGraphErrors with linear functions",0,0,700,500);
   myc->SetHighLightColor(2);
   myc->Range(-12.5,-22002.63,112.5,198023.7);
   myc->SetFillColor(0);
   myc->SetBorderMode(0);
   myc->SetBorderSize(2);
   myc->SetGridx();
   myc->SetGridy();
   myc->SetFrameBorderMode(0);
   myc->SetFrameBorderMode(0);
   
   TMultiGraph *multigraph = new TMultiGraph();
   multigraph->SetName("");
   multigraph->SetTitle("");
   
   Double_t Graph_fx1001[6] = {
   22.5,
   32.5,
   17.5,
   27.5,
   12.5,
   37.5};
   Double_t Graph_fy1001[6] = {
   167073,
   171071,
   163719,
   169090,
   159393,
   173509};
   Double_t Graph_fex1001[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1001[6] = {
   1231.19,
   1432.37,
   1134.84,
   1276.04,
   1296.12,
   1591.42};
   TGraphErrors *gre = new TGraphErrors(6,Graph_fx1001,Graph_fy1001,Graph_fex1001,Graph_fey1001);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(4);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,10,40);
   Graph_Graph1001->SetMinimum(156396.5);
   Graph_Graph1001->SetMaximum(176800.8);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   
   TF1 *pfo_mT1002 = new TF1("pfo_mT","x ++ 1",0,100);
   pfo_mT1002->SetFillColor(19);
   pfo_mT1002->SetFillStyle(0);
   pfo_mT1002->SetLineColor(2);
   pfo_mT1002->SetLineWidth(1);
   pfo_mT1002->SetChisquare(2.030358);
   pfo_mT1002->SetNDF(4);
   pfo_mT1002->GetXaxis()->SetLabelFont(42);
   pfo_mT1002->GetXaxis()->SetLabelSize(0.035);
   pfo_mT1002->GetXaxis()->SetTitleSize(0.035);
   pfo_mT1002->GetXaxis()->SetTitleFont(42);
   pfo_mT1002->GetYaxis()->SetLabelFont(42);
   pfo_mT1002->GetYaxis()->SetLabelSize(0.035);
   pfo_mT1002->GetYaxis()->SetTitleSize(0.035);
   pfo_mT1002->GetYaxis()->SetTitleFont(42);
   pfo_mT1002->SetParameter(0,546.4608);
   pfo_mT1002->SetParError(0,66.33375);
   pfo_mT1002->SetParLimits(0,0,0);
   pfo_mT1002->SetParameter(1,153742.8);
   pfo_mT1002->SetParError(1,1656.237);
   pfo_mT1002->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(pfo_mT1002);
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1003[6] = {
   22.5,
   32.5,
   17.5,
   27.5,
   12.5,
   37.5};
   Double_t Graph_fy1003[6] = {
   165186,
   169267,
   162243,
   167189,
   158579,
   171326};
   Double_t Graph_fex1003[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1003[6] = {
   1340.51,
   1413.79,
   1304.07,
   1332.61,
   1220.61,
   1566.35};
   gre = new TGraphErrors(6,Graph_fx1003,Graph_fy1003,Graph_fex1003,Graph_fey1003);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(4);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,10,40);
   Graph_Graph1003->SetMinimum(155805);
   Graph_Graph1003->SetMaximum(174445.7);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   
   TF1 *pfo_met1004 = new TF1("pfo_met","x ++ 1",0,100);
   pfo_met1004->SetFillColor(19);
   pfo_met1004->SetFillStyle(0);
   pfo_met1004->SetLineColor(3);
   pfo_met1004->SetLineWidth(1);
   pfo_met1004->SetChisquare(1.048547);
   pfo_met1004->SetNDF(4);
   pfo_met1004->GetXaxis()->SetLabelFont(42);
   pfo_met1004->GetXaxis()->SetLabelSize(0.035);
   pfo_met1004->GetXaxis()->SetTitleSize(0.035);
   pfo_met1004->GetXaxis()->SetTitleFont(42);
   pfo_met1004->GetYaxis()->SetLabelFont(42);
   pfo_met1004->GetYaxis()->SetLabelSize(0.035);
   pfo_met1004->GetYaxis()->SetTitleSize(0.035);
   pfo_met1004->GetYaxis()->SetTitleFont(42);
   pfo_met1004->SetParameter(0,505.1956);
   pfo_met1004->SetParError(0,65.64463);
   pfo_met1004->SetParLimits(0,0,0);
   pfo_met1004->SetParameter(1,153011.2);
   pfo_met1004->SetParError(1,1656.998);
   pfo_met1004->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(pfo_met1004);
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1005[6] = {
   22.5,
   32.5,
   17.5,
   27.5,
   12.5,
   37.5};
   Double_t Graph_fy1005[6] = {
   165228,
   166551,
   162716,
   165921,
   158473,
   169022};
   Double_t Graph_fex1005[6] = {
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph_fey1005[6] = {
   1724.64,
   1944.13,
   1844.07,
   1890.81,
   1785.42,
   1914.71};
   gre = new TGraphErrors(6,Graph_fx1005,Graph_fy1005,Graph_fex1005,Graph_fey1005);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(4);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","Graph",100,10,40);
   Graph_Graph1005->SetMinimum(155262.7);
   Graph_Graph1005->SetMaximum(172361.6);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   
   TF1 *leppt1006 = new TF1("leppt","x ++ 1",0,100);
   leppt1006->SetFillColor(19);
   leppt1006->SetFillStyle(0);
   leppt1006->SetLineColor(4);
   leppt1006->SetLineWidth(1);
   leppt1006->SetChisquare(1.970663);
   leppt1006->SetNDF(4);
   leppt1006->GetXaxis()->SetLabelFont(42);
   leppt1006->GetXaxis()->SetLabelSize(0.035);
   leppt1006->GetXaxis()->SetTitleSize(0.035);
   leppt1006->GetXaxis()->SetTitleFont(42);
   leppt1006->GetYaxis()->SetLabelFont(42);
   leppt1006->GetYaxis()->SetLabelSize(0.035);
   leppt1006->GetYaxis()->SetTitleSize(0.035);
   leppt1006->GetYaxis()->SetTitleFont(42);
   leppt1006->SetParameter(0,375.0894);
   leppt1006->SetParError(0,88.9195);
   leppt1006->SetParLimits(0,0,0);
   leppt1006->SetParameter(1,155310.7);
   leppt1006->SetParError(1,2305.481);
   leppt1006->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(leppt1006);
   multigraph->Add(gre,"");
   multigraph->Draw("ap");
   multigraph->GetXaxis()->SetTitle("ptvarcone/pT[%]");
   multigraph->GetXaxis()->SetLabelFont(42);
   multigraph->GetXaxis()->SetLabelSize(0.035);
   multigraph->GetXaxis()->SetTitleSize(0.035);
   multigraph->GetXaxis()->SetTitleFont(42);
   multigraph->GetYaxis()->SetTitle("evaluated MJ");
   multigraph->GetYaxis()->SetLabelFont(42);
   multigraph->GetYaxis()->SetLabelSize(0.035);
   multigraph->GetYaxis()->SetTitleSize(0.035);
   multigraph->GetYaxis()->SetTitleFont(42);
   
   TLegend *leg = new TLegend(0.7,0.8,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("pfo_mT","pfo_mT","L");
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("pfo_met","pfo_met","L");
   entry->SetLineColor(3);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("leppt","leppt","L");
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   myc->Modified();
   myc->cd();
   myc->SetSelected(myc);
}
