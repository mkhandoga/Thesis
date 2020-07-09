void testFit()
{
//=========Macro generated from canvas: myc/Fitting 3 TGraphErrors with linear functions
//=========  (Tue Nov 27 12:33:26 2018) by ROOT version6.04/16
   TCanvas *myc = new TCanvas("myc", "Fitting 3 TGraphErrors with linear functions",0,0,700,500);
   myc->SetHighLightColor(2);
   myc->Range(-12.5,-21930.79,112.5,197377.1);
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
   
   Double_t Graph_fx1001[3] = {
   15,
   35,
   25};
   Double_t Graph_fy1001[3] = {
   162331,
   173624,
   169205};
   Double_t Graph_fex1001[3] = {
   0,
   0,
   0};
   Double_t Graph_fey1001[3] = {
   1034.42,
   1069.6,
   1090.67};
   TGraphErrors *gre = new TGraphErrors(3,Graph_fx1001,Graph_fy1001,Graph_fex1001,Graph_fey1001);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(4);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,13,37);
   Graph_Graph1001->SetMinimum(159956.9);
   Graph_Graph1001->SetMaximum(176033.3);
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
   pfo_mT1002->SetChisquare(0.8644226);
   pfo_mT1002->SetNDF(1);
   pfo_mT1002->GetXaxis()->SetLabelFont(42);
   pfo_mT1002->GetXaxis()->SetLabelSize(0.035);
   pfo_mT1002->GetXaxis()->SetTitleSize(0.035);
   pfo_mT1002->GetXaxis()->SetTitleFont(42);
   pfo_mT1002->GetYaxis()->SetLabelFont(42);
   pfo_mT1002->GetYaxis()->SetLabelSize(0.035);
   pfo_mT1002->GetYaxis()->SetTitleSize(0.035);
   pfo_mT1002->GetYaxis()->SetTitleFont(42);
   pfo_mT1002->SetParameter(0,565.9531);
   pfo_mT1002->SetParError(0,74.38553);
   pfo_mT1002->SetParLimits(0,0,0);
   pfo_mT1002->SetParameter(1,154218.5);
   pfo_mT1002->SetParError(1,1942.385);
   pfo_mT1002->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(pfo_mT1002);
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1003[3] = {
   15,
   35,
   25};
   Double_t Graph_fy1003[3] = {
   161150,
   171640,
   167312};
   Double_t Graph_fex1003[3] = {
   0,
   0,
   0};
   Double_t Graph_fey1003[3] = {
   1019.71,
   1178.95,
   1076.39};
   gre = new TGraphErrors(3,Graph_fx1003,Graph_fy1003,Graph_fex1003,Graph_fey1003);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(4);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,13,37);
   Graph_Graph1003->SetMinimum(158861.4);
   Graph_Graph1003->SetMaximum(174087.8);
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
   pfo_met1004->SetChisquare(0.4761416);
   pfo_met1004->SetNDF(1);
   pfo_met1004->GetXaxis()->SetLabelFont(42);
   pfo_met1004->GetXaxis()->SetLabelSize(0.035);
   pfo_met1004->GetXaxis()->SetTitleSize(0.035);
   pfo_met1004->GetXaxis()->SetTitleFont(42);
   pfo_met1004->GetYaxis()->SetLabelFont(42);
   pfo_met1004->GetYaxis()->SetLabelSize(0.035);
   pfo_met1004->GetYaxis()->SetTitleSize(0.035);
   pfo_met1004->GetYaxis()->SetTitleFont(42);
   pfo_met1004->SetParameter(0,529.0448);
   pfo_met1004->SetParError(0,77.65918);
   pfo_met1004->SetParLimits(0,0,0);
   pfo_met1004->SetParameter(1,153484.3);
   pfo_met1004->SetParError(1,1969.958);
   pfo_met1004->SetParLimits(1,0,0);
   gre->GetListOfFunctions()->Add(pfo_met1004);
   multigraph->Add(gre,"");
   
   Double_t Graph_fx1005[3] = {
   15,
   35,
   25};
   Double_t Graph_fy1005[3] = {
   161221,
   168689,
   166440};
   Double_t Graph_fex1005[3] = {
   0,
   0,
   0};
   Double_t Graph_fey1005[3] = {
   1582.15,
   1720.82,
   1654.09};
   gre = new TGraphErrors(3,Graph_fx1005,Graph_fy1005,Graph_fex1005,Graph_fey1005);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(4);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","Graph",100,13,37);
   Graph_Graph1005->SetMinimum(158561.8);
   Graph_Graph1005->SetMaximum(171486.9);
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
   leppt1006->SetChisquare(0.537582);
   leppt1006->SetNDF(1);
   leppt1006->GetXaxis()->SetLabelFont(42);
   leppt1006->GetXaxis()->SetLabelSize(0.035);
   leppt1006->GetXaxis()->SetTitleSize(0.035);
   leppt1006->GetXaxis()->SetTitleFont(42);
   leppt1006->GetYaxis()->SetLabelFont(42);
   leppt1006->GetYaxis()->SetLabelSize(0.035);
   leppt1006->GetYaxis()->SetTitleSize(0.035);
   leppt1006->GetYaxis()->SetTitleFont(42);
   leppt1006->SetParameter(0,377.5452);
   leppt1006->SetParError(0,116.7437);
   leppt1006->SetParLimits(0,0,0);
   leppt1006->SetParameter(1,156010.9);
   leppt1006->SetParError(1,3007.902);
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
