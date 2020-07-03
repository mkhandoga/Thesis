void cUperpVsSET_62_ratio()
{
//=========Macro generated from canvas: cUperpVsSET_62/
//=========  (Mon Aug 19 16:50:32 2019) by ROOT version 6.18/00
   TCanvas *cUperpVsSET_62 = new TCanvas("cUperpVsSET_62", "",1,1,700,476);
   gStyle->SetOptStat(0);
   cUperpVsSET_62->Range(-12.5,-15,112.5,35);
   cUperpVsSET_62->SetFillColor(0);
   cUperpVsSET_62->SetBorderMode(0);
   cUperpVsSET_62->SetBorderSize(2);
   cUperpVsSET_62->SetFrameBorderMode(0);
   
   TH1D *hb_62__36 = new TH1D("hb_62__36","440 GeV < SETUE < 480 GeV",40,0,200);
   hb_62__36->SetBinContent(1,1.038796);
   hb_62__36->SetBinContent(2,1.108844);
   hb_62__36->SetBinContent(3,1.861987);
   hb_62__36->SetBinContent(4,-1.435556);
   hb_62__36->SetBinContent(5,-0.3076923);
   hb_62__36->SetBinContent(6,1.094217);
   hb_62__36->SetBinContent(7,1.581699);
   hb_62__36->SetBinContent(8,2.288136);
   hb_62__36->SetBinContent(9,2.62768);
   hb_62__36->SetBinContent(10,1.843034);
   hb_62__36->SetBinContent(11,0.5970696);
   hb_62__36->SetBinContent(12,12.78571);
   hb_62__36->SetBinContent(13,0.46875);
   hb_62__36->SetBinContent(14,-0.5769231);
   hb_62__36->SetBinContent(15,2.925926);
   hb_62__36->SetBinContent(16,0.8596491);
   hb_62__36->SetBinContent(17,-1.38);
   hb_62__36->SetBinContent(18,3.10989);
   hb_62__36->SetBinContent(19,0.2467532);
   hb_62__36->SetBinContent(21,0.3115578);
   hb_62__36->SetBinContent(22,-8.555556);
   hb_62__36->SetBinContent(23,-0.01960784);
   hb_62__36->SetBinContent(24,0.3090909);
   hb_62__36->SetBinContent(25,8);
   hb_62__36->SetBinContent(26,0.5714286);
   hb_62__36->SetBinContent(28,1.036364);
   hb_62__36->SetBinContent(29,1.518519);
   hb_62__36->SetBinContent(31,2.384615);
   hb_62__36->SetBinContent(41,4.567164);
   hb_62__36->SetBinError(1,1.156247);
   hb_62__36->SetBinError(2,0.8237164);
   hb_62__36->SetBinError(3,2.173861);
   hb_62__36->SetBinError(4,24.46689);
   hb_62__36->SetBinError(5,0.6315116);
   hb_62__36->SetBinError(6,0.584649);
   hb_62__36->SetBinError(7,1.648106);
   hb_62__36->SetBinError(8,2.589032);
   hb_62__36->SetBinError(9,1.867267);
   hb_62__36->SetBinError(10,1.295305);
   hb_62__36->SetBinError(11,0.3049939);
   hb_62__36->SetBinError(12,68.65742);
   hb_62__36->SetBinError(13,0.6783541);
   hb_62__36->SetBinError(14,0.5764203);
   hb_62__36->SetBinError(15,0.6048123);
   hb_62__36->SetBinError(16,1.375254);
   hb_62__36->SetBinError(17,1.181071);
   hb_62__36->SetBinError(18,5.551117);
   hb_62__36->SetBinError(19,0.1580352);
   hb_62__36->SetBinError(21,0.1283376);
   hb_62__36->SetBinError(22,2.834241);
   hb_62__36->SetBinError(25,8.551316);
   hb_62__36->SetBinError(26,0.1459109);
   hb_62__36->SetBinError(28,0.3856946);
   hb_62__36->SetBinError(31,1.902354);
   hb_62__36->SetBinError(41,6.234399);
   hb_62__36->SetMinimum(0);
   hb_62__36->SetMaximum(2.5);
   hb_62__36->SetEntries(0.2414871);
   hb_62__36->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   hb_62__36->SetLineColor(ci);
   hb_62__36->GetXaxis()->SetRange(1,20);
   hb_62__36->GetXaxis()->SetLabelFont(42);
   hb_62__36->GetXaxis()->SetLabelSize(0.035);
   hb_62__36->GetXaxis()->SetTitleSize(0.035);
   hb_62__36->GetXaxis()->SetTitleOffset(1);
   hb_62__36->GetXaxis()->SetTitleFont(42);
   hb_62__36->GetYaxis()->SetLabelFont(42);
   hb_62__36->GetYaxis()->SetLabelSize(0.035);
   hb_62__36->GetYaxis()->SetTitleSize(0.035);
   hb_62__36->GetYaxis()->SetTitleFont(42);
   hb_62__36->GetZaxis()->SetLabelFont(42);
   hb_62__36->GetZaxis()->SetLabelSize(0.035);
   hb_62__36->GetZaxis()->SetTitleSize(0.035);
   hb_62__36->GetZaxis()->SetTitleOffset(1);
   hb_62__36->GetZaxis()->SetTitleFont(42);
   hb_62__36->Draw("histe");
   cUperpVsSET_62->Modified();
   cUperpVsSET_62->cd();
   cUperpVsSET_62->SetSelected(cUperpVsSET_62);
}
