void fig15a()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Aug 27 12:17:20 2019) by ROOT version 6.16/00
   TCanvas *c1 = new TCanvas("c1", "c1",11,61,700,502);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->Range(-12.43292,90173.93,112.4329,188227.8);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TProfile *hda_S_Zpt_pfx = new TProfile("hda_S_Zpt_pfx","t_hr[1][2]-1000*t_zll2[1]:t_zll2[1] {(t_lepe[1][10]>25000 && t_lepe[0][10]>25000  &&  abs( t_zll2[0]-90 )<15 &&  (t_lepe[0][6]+t_lepe[1][6]+ t_lepe[0][7]+t_lepe[1][7]< 10e3 && (abs(t_lepe[0][3])<3 && abs(t_lepe[1][3])<3))  && t_nmu[0]==2 && t_nmu[1]==2 && 1.25< t_actualIntPerXing && t_actualIntPerXing < 2.75)}",20,0,100,"");
   hda_S_Zpt_pfx->SetBinEntries(1,17393);
   hda_S_Zpt_pfx->SetBinEntries(2,20987);
   hda_S_Zpt_pfx->SetBinEntries(3,14373);
   hda_S_Zpt_pfx->SetBinEntries(4,9614);
   hda_S_Zpt_pfx->SetBinEntries(5,7010);
   hda_S_Zpt_pfx->SetBinEntries(6,4894);
   hda_S_Zpt_pfx->SetBinEntries(7,3651);
   hda_S_Zpt_pfx->SetBinEntries(8,2701);
   hda_S_Zpt_pfx->SetBinEntries(9,2142);
   hda_S_Zpt_pfx->SetBinEntries(10,1598);
   hda_S_Zpt_pfx->SetBinEntries(11,1303);
   hda_S_Zpt_pfx->SetBinEntries(12,989);
   hda_S_Zpt_pfx->SetBinEntries(13,850);
   hda_S_Zpt_pfx->SetBinEntries(14,641);
   hda_S_Zpt_pfx->SetBinEntries(15,544);
   hda_S_Zpt_pfx->SetBinEntries(16,454);
   hda_S_Zpt_pfx->SetBinEntries(17,429);
   hda_S_Zpt_pfx->SetBinEntries(18,328);
   hda_S_Zpt_pfx->SetBinEntries(19,304);
   hda_S_Zpt_pfx->SetBinEntries(20,211);
   hda_S_Zpt_pfx->SetBinEntries(21,1842);
   hda_S_Zpt_pfx->SetBinContent(1,2.128532e+09);
   hda_S_Zpt_pfx->SetBinContent(2,2.628123e+09);
   hda_S_Zpt_pfx->SetBinContent(3,1.842468e+09);
   hda_S_Zpt_pfx->SetBinContent(4,1.265073e+09);
   hda_S_Zpt_pfx->SetBinContent(5,9.449545e+08);
   hda_S_Zpt_pfx->SetBinContent(6,6.771545e+08);
   hda_S_Zpt_pfx->SetBinContent(7,5.225409e+08);
   hda_S_Zpt_pfx->SetBinContent(8,3.892591e+08);
   hda_S_Zpt_pfx->SetBinContent(9,3.166182e+08);
   hda_S_Zpt_pfx->SetBinContent(10,2.374545e+08);
   hda_S_Zpt_pfx->SetBinContent(11,1.985591e+08);
   hda_S_Zpt_pfx->SetBinContent(12,1.529136e+08);
   hda_S_Zpt_pfx->SetBinContent(13,1.286364e+08);
   hda_S_Zpt_pfx->SetBinContent(14,9.934091e+07);
   hda_S_Zpt_pfx->SetBinContent(15,8.564545e+07);
   hda_S_Zpt_pfx->SetBinContent(16,7.25e+07);
   hda_S_Zpt_pfx->SetBinContent(17,6.846818e+07);
   hda_S_Zpt_pfx->SetBinContent(18,5.128182e+07);
   hda_S_Zpt_pfx->SetBinContent(19,4.918182e+07);
   hda_S_Zpt_pfx->SetBinContent(20,3.535909e+07);
   hda_S_Zpt_pfx->SetBinContent(21,3.303182e+08);
   hda_S_Zpt_pfx->SetBinError(1,1.911896e+07);
   hda_S_Zpt_pfx->SetBinError(2,2.140101e+07);
   hda_S_Zpt_pfx->SetBinError(3,1.811483e+07);
   hda_S_Zpt_pfx->SetBinError(4,1.519766e+07);
   hda_S_Zpt_pfx->SetBinError(5,1.331054e+07);
   hda_S_Zpt_pfx->SetBinError(6,1.131178e+07);
   hda_S_Zpt_pfx->SetBinError(7,1.018694e+07);
   hda_S_Zpt_pfx->SetBinError(8,8817475);
   hda_S_Zpt_pfx->SetBinError(9,8101992);
   hda_S_Zpt_pfx->SetBinError(10,7037793);
   hda_S_Zpt_pfx->SetBinError(11,6514712);
   hda_S_Zpt_pfx->SetBinError(12,5745579);
   hda_S_Zpt_pfx->SetBinError(13,5196443);
   hda_S_Zpt_pfx->SetBinError(14,4680735);
   hda_S_Zpt_pfx->SetBinError(15,4319378);
   hda_S_Zpt_pfx->SetBinError(16,3998672);
   hda_S_Zpt_pfx->SetBinError(17,3932102);
   hda_S_Zpt_pfx->SetBinError(18,3337169);
   hda_S_Zpt_pfx->SetBinError(19,3291713);
   hda_S_Zpt_pfx->SetBinError(20,2857132);
   hda_S_Zpt_pfx->SetBinError(21,9342662);
   hda_S_Zpt_pfx->SetMinimum(100000);
   hda_S_Zpt_pfx->SetEntries(90416);
   hda_S_Zpt_pfx->SetLineColor(2);
   hda_S_Zpt_pfx->SetLineWidth(2);
   hda_S_Zpt_pfx->GetXaxis()->SetTitle("p_{T}^{ll}    in GeV");
   hda_S_Zpt_pfx->GetXaxis()->SetLabelFont(42);
   hda_S_Zpt_pfx->GetXaxis()->SetLabelSize(0.035);
   hda_S_Zpt_pfx->GetXaxis()->SetTitleSize(0.035);
   hda_S_Zpt_pfx->GetXaxis()->SetTitleOffset(1);
   hda_S_Zpt_pfx->GetXaxis()->SetTitleFont(42);
   hda_S_Zpt_pfx->GetYaxis()->SetTitle("#Sigma E_{T}-p_{T}^{ll}    in MeV");
   hda_S_Zpt_pfx->GetYaxis()->SetLabelFont(42);
   hda_S_Zpt_pfx->GetYaxis()->SetLabelSize(0.035);
   hda_S_Zpt_pfx->GetYaxis()->SetTitleSize(0.035);
   hda_S_Zpt_pfx->GetYaxis()->SetTitleFont(42);
   hda_S_Zpt_pfx->GetZaxis()->SetLabelFont(42);
   hda_S_Zpt_pfx->GetZaxis()->SetLabelSize(0.035);
   hda_S_Zpt_pfx->GetZaxis()->SetTitleSize(0.035);
   hda_S_Zpt_pfx->GetZaxis()->SetTitleOffset(1);
   hda_S_Zpt_pfx->GetZaxis()->SetTitleFont(42);
   hda_S_Zpt_pfx->Draw("e");
   
   TProfile *hS_S_Zpt_48_48_pfx = new TProfile("hS_S_Zpt_48_48_pfx","hS_S_Zpt_48_48",20,0,100,"");
   hS_S_Zpt_48_48_pfx->SetBinEntries(1,17386.85);
   hS_S_Zpt_48_48_pfx->SetBinEntries(2,20968.61);
   hS_S_Zpt_48_48_pfx->SetBinEntries(3,14357.17);
   hS_S_Zpt_48_48_pfx->SetBinEntries(4,9605.42);
   hS_S_Zpt_48_48_pfx->SetBinEntries(5,7010.788);
   hS_S_Zpt_48_48_pfx->SetBinEntries(6,4889.227);
   hS_S_Zpt_48_48_pfx->SetBinEntries(7,3646.166);
   hS_S_Zpt_48_48_pfx->SetBinEntries(8,2700.249);
   hS_S_Zpt_48_48_pfx->SetBinEntries(9,2140.99);
   hS_S_Zpt_48_48_pfx->SetBinEntries(10,1596.449);
   hS_S_Zpt_48_48_pfx->SetBinEntries(11,1303.425);
   hS_S_Zpt_48_48_pfx->SetBinEntries(12,985.2507);
   hS_S_Zpt_48_48_pfx->SetBinEntries(13,850.5673);
   hS_S_Zpt_48_48_pfx->SetBinEntries(14,639.8979);
   hS_S_Zpt_48_48_pfx->SetBinEntries(15,545.7603);
   hS_S_Zpt_48_48_pfx->SetBinEntries(16,452.7579);
   hS_S_Zpt_48_48_pfx->SetBinEntries(17,428.3922);
   hS_S_Zpt_48_48_pfx->SetBinEntries(18,325.2456);
   hS_S_Zpt_48_48_pfx->SetBinEntries(19,303.8516);
   hS_S_Zpt_48_48_pfx->SetBinEntries(20,210.4911);
   hS_S_Zpt_48_48_pfx->SetBinEntries(21,1843.715);
   hS_S_Zpt_48_48_pfx->SetBinContent(1,2.021004e+09);
   hS_S_Zpt_48_48_pfx->SetBinContent(2,2.467188e+09);
   hS_S_Zpt_48_48_pfx->SetBinContent(3,1.750369e+09);
   hS_S_Zpt_48_48_pfx->SetBinContent(4,1.212353e+09);
   hS_S_Zpt_48_48_pfx->SetBinContent(5,9.161749e+08);
   hS_S_Zpt_48_48_pfx->SetBinContent(6,6.471523e+08);
   hS_S_Zpt_48_48_pfx->SetBinContent(7,4.954262e+08);
   hS_S_Zpt_48_48_pfx->SetBinContent(8,3.734014e+08);
   hS_S_Zpt_48_48_pfx->SetBinContent(9,3.01394e+08);
   hS_S_Zpt_48_48_pfx->SetBinContent(10,2.273773e+08);
   hS_S_Zpt_48_48_pfx->SetBinContent(11,1.90457e+08);
   hS_S_Zpt_48_48_pfx->SetBinContent(12,1.454204e+08);
   hS_S_Zpt_48_48_pfx->SetBinContent(13,1.297907e+08);
   hS_S_Zpt_48_48_pfx->SetBinContent(14,9.811093e+07);
   hS_S_Zpt_48_48_pfx->SetBinContent(15,8.54918e+07);
   hS_S_Zpt_48_48_pfx->SetBinContent(16,7.069655e+07);
   hS_S_Zpt_48_48_pfx->SetBinContent(17,6.809815e+07);
   hS_S_Zpt_48_48_pfx->SetBinContent(18,5.234687e+07);
   hS_S_Zpt_48_48_pfx->SetBinContent(19,4.928151e+07);
   hS_S_Zpt_48_48_pfx->SetBinContent(20,3.441998e+07);
   hS_S_Zpt_48_48_pfx->SetBinContent(21,3.264783e+08);
   hS_S_Zpt_48_48_pfx->SetBinError(1,1.843184e+07);
   hS_S_Zpt_48_48_pfx->SetBinError(2,2.047026e+07);
   hS_S_Zpt_48_48_pfx->SetBinError(3,1.747678e+07);
   hS_S_Zpt_48_48_pfx->SetBinError(4,1.474504e+07);
   hS_S_Zpt_48_48_pfx->SetBinError(5,1.30168e+07);
   hS_S_Zpt_48_48_pfx->SetBinError(6,1.101613e+07);
   hS_S_Zpt_48_48_pfx->SetBinError(7,9754977);
   hS_S_Zpt_48_48_pfx->SetBinError(8,8558510);
   hS_S_Zpt_48_48_pfx->SetBinError(9,7764663);
   hS_S_Zpt_48_48_pfx->SetBinError(10,6790604);
   hS_S_Zpt_48_48_pfx->SetBinError(11,6294393);
   hS_S_Zpt_48_48_pfx->SetBinError(12,5523118);
   hS_S_Zpt_48_48_pfx->SetBinError(13,5312016);
   hS_S_Zpt_48_48_pfx->SetBinError(14,4634664);
   hS_S_Zpt_48_48_pfx->SetBinError(15,4369956);
   hS_S_Zpt_48_48_pfx->SetBinError(16,3986281);
   hS_S_Zpt_48_48_pfx->SetBinError(17,3931458);
   hS_S_Zpt_48_48_pfx->SetBinError(18,3504330);
   hS_S_Zpt_48_48_pfx->SetBinError(19,3406248);
   hS_S_Zpt_48_48_pfx->SetBinError(20,2858594);
   hS_S_Zpt_48_48_pfx->SetBinError(21,9313676);
   hS_S_Zpt_48_48_pfx->SetEntries(1310951);
   hS_S_Zpt_48_48_pfx->SetLineColor(51);
   hS_S_Zpt_48_48_pfx->SetLineWidth(2);
   hS_S_Zpt_48_48_pfx->GetXaxis()->SetLabelFont(42);
   hS_S_Zpt_48_48_pfx->GetXaxis()->SetLabelSize(0.035);
   hS_S_Zpt_48_48_pfx->GetXaxis()->SetTitleSize(0.035);
   hS_S_Zpt_48_48_pfx->GetXaxis()->SetTitleOffset(1);
   hS_S_Zpt_48_48_pfx->GetXaxis()->SetTitleFont(42);
   hS_S_Zpt_48_48_pfx->GetYaxis()->SetLabelFont(42);
   hS_S_Zpt_48_48_pfx->GetYaxis()->SetLabelSize(0.035);
   hS_S_Zpt_48_48_pfx->GetYaxis()->SetTitleSize(0.035);
   hS_S_Zpt_48_48_pfx->GetYaxis()->SetTitleFont(42);
   hS_S_Zpt_48_48_pfx->GetZaxis()->SetLabelFont(42);
   hS_S_Zpt_48_48_pfx->GetZaxis()->SetLabelSize(0.035);
   hS_S_Zpt_48_48_pfx->GetZaxis()->SetTitleSize(0.035);
   hS_S_Zpt_48_48_pfx->GetZaxis()->SetTitleOffset(1);
   hS_S_Zpt_48_48_pfx->GetZaxis()->SetTitleFont(42);
   hS_S_Zpt_48_48_pfx->Draw("same");
   
   TProfile *hP_S_Zpt_48_48_pfx = new TProfile("hP_S_Zpt_48_48_pfx","hP_S_Zpt_48_48",20,0,100,"");
   hP_S_Zpt_48_48_pfx->SetBinEntries(1,17390.11);
   hP_S_Zpt_48_48_pfx->SetBinEntries(2,20981.95);
   hP_S_Zpt_48_48_pfx->SetBinEntries(3,14371.13);
   hP_S_Zpt_48_48_pfx->SetBinEntries(4,9611.652);
   hP_S_Zpt_48_48_pfx->SetBinEntries(5,7006.628);
   hP_S_Zpt_48_48_pfx->SetBinEntries(6,4890.899);
   hP_S_Zpt_48_48_pfx->SetBinEntries(7,3648.044);
   hP_S_Zpt_48_48_pfx->SetBinEntries(8,2702.333);
   hP_S_Zpt_48_48_pfx->SetBinEntries(9,2141.14);
   hP_S_Zpt_48_48_pfx->SetBinEntries(10,1596.624);
   hP_S_Zpt_48_48_pfx->SetBinEntries(11,1301.752);
   hP_S_Zpt_48_48_pfx->SetBinEntries(12,989.2852);
   hP_S_Zpt_48_48_pfx->SetBinEntries(13,849.727);
   hP_S_Zpt_48_48_pfx->SetBinEntries(14,641.4408);
   hP_S_Zpt_48_48_pfx->SetBinEntries(15,545.5116);
   hP_S_Zpt_48_48_pfx->SetBinEntries(16,453.3553);
   hP_S_Zpt_48_48_pfx->SetBinEntries(17,427.9789);
   hP_S_Zpt_48_48_pfx->SetBinEntries(18,326.1837);
   hP_S_Zpt_48_48_pfx->SetBinEntries(19,303.3163);
   hP_S_Zpt_48_48_pfx->SetBinEntries(20,211.2286);
   hP_S_Zpt_48_48_pfx->SetBinEntries(21,1842.038);
   hP_S_Zpt_48_48_pfx->SetBinContent(1,2.393465e+09);
   hP_S_Zpt_48_48_pfx->SetBinContent(2,2.903417e+09);
   hP_S_Zpt_48_48_pfx->SetBinContent(3,2.008692e+09);
   hP_S_Zpt_48_48_pfx->SetBinContent(4,1.352174e+09);
   hP_S_Zpt_48_48_pfx->SetBinContent(5,9.929142e+08);
   hP_S_Zpt_48_48_pfx->SetBinContent(6,6.989443e+08);
   hP_S_Zpt_48_48_pfx->SetBinContent(7,5.261229e+08);
   hP_S_Zpt_48_48_pfx->SetBinContent(8,3.952104e+08);
   hP_S_Zpt_48_48_pfx->SetBinContent(9,3.14906e+08);
   hP_S_Zpt_48_48_pfx->SetBinContent(10,2.362801e+08);
   hP_S_Zpt_48_48_pfx->SetBinContent(11,1.926024e+08);
   hP_S_Zpt_48_48_pfx->SetBinContent(12,1.477128e+08);
   hP_S_Zpt_48_48_pfx->SetBinContent(13,1.27473e+08);
   hP_S_Zpt_48_48_pfx->SetBinContent(14,9.747278e+07);
   hP_S_Zpt_48_48_pfx->SetBinContent(15,8.319746e+07);
   hP_S_Zpt_48_48_pfx->SetBinContent(16,6.927126e+07);
   hP_S_Zpt_48_48_pfx->SetBinContent(17,6.534137e+07);
   hP_S_Zpt_48_48_pfx->SetBinContent(18,5.03046e+07);
   hP_S_Zpt_48_48_pfx->SetBinContent(19,4.730301e+07);
   hP_S_Zpt_48_48_pfx->SetBinContent(20,3.313696e+07);
   hP_S_Zpt_48_48_pfx->SetBinContent(21,2.995645e+08);
   hP_S_Zpt_48_48_pfx->SetBinError(1,2.131842e+07);
   hP_S_Zpt_48_48_pfx->SetBinError(2,2.356536e+07);
   hP_S_Zpt_48_48_pfx->SetBinError(3,1.966491e+07);
   hP_S_Zpt_48_48_pfx->SetBinError(4,1.616411e+07);
   hP_S_Zpt_48_48_pfx->SetBinError(5,1.388961e+07);
   hP_S_Zpt_48_48_pfx->SetBinError(6,1.169601e+07);
   hP_S_Zpt_48_48_pfx->SetBinError(7,1.016048e+07);
   hP_S_Zpt_48_48_pfx->SetBinError(8,8872672);
   hP_S_Zpt_48_48_pfx->SetBinError(9,7938602);
   hP_S_Zpt_48_48_pfx->SetBinError(10,6897957);
   hP_S_Zpt_48_48_pfx->SetBinError(11,6214440);
   hP_S_Zpt_48_48_pfx->SetBinError(12,5460908);
   hP_S_Zpt_48_48_pfx->SetBinError(13,5095802);
   hP_S_Zpt_48_48_pfx->SetBinError(14,4486007);
   hP_S_Zpt_48_48_pfx->SetBinError(15,4130280);
   hP_S_Zpt_48_48_pfx->SetBinError(16,3776768);
   hP_S_Zpt_48_48_pfx->SetBinError(17,3675489);
   hP_S_Zpt_48_48_pfx->SetBinError(18,3228018);
   hP_S_Zpt_48_48_pfx->SetBinError(19,3155589);
   hP_S_Zpt_48_48_pfx->SetBinError(20,2635391);
   hP_S_Zpt_48_48_pfx->SetBinError(21,8158585);
   hP_S_Zpt_48_48_pfx->SetEntries(1560923);
   hP_S_Zpt_48_48_pfx->SetStats(0);
   hP_S_Zpt_48_48_pfx->SetLineColor(4);
   hP_S_Zpt_48_48_pfx->SetLineWidth(2);
   hP_S_Zpt_48_48_pfx->GetXaxis()->SetLabelFont(42);
   hP_S_Zpt_48_48_pfx->GetXaxis()->SetLabelSize(0.035);
   hP_S_Zpt_48_48_pfx->GetXaxis()->SetTitleSize(0.035);
   hP_S_Zpt_48_48_pfx->GetXaxis()->SetTitleOffset(1);
   hP_S_Zpt_48_48_pfx->GetXaxis()->SetTitleFont(42);
   hP_S_Zpt_48_48_pfx->GetYaxis()->SetLabelFont(42);
   hP_S_Zpt_48_48_pfx->GetYaxis()->SetLabelSize(0.035);
   hP_S_Zpt_48_48_pfx->GetYaxis()->SetTitleSize(0.035);
   hP_S_Zpt_48_48_pfx->GetYaxis()->SetTitleFont(42);
   hP_S_Zpt_48_48_pfx->GetZaxis()->SetLabelFont(42);
   hP_S_Zpt_48_48_pfx->GetZaxis()->SetLabelSize(0.035);
   hP_S_Zpt_48_48_pfx->GetZaxis()->SetTitleSize(0.035);
   hP_S_Zpt_48_48_pfx->GetZaxis()->SetTitleOffset(1);
   hP_S_Zpt_48_48_pfx->GetZaxis()->SetTitleFont(42);
   hP_S_Zpt_48_48_pfx->Draw("same");
   TLatex *   tex = new TLatex(399443.2,4944.295,"Data");
   tex->SetTextColor(2);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(7.020056,164218.3,"Powheg");
   tex->SetTextColor(4);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(7.020056,156981.8,"Sherpa");
   tex->SetTextColor(51);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(7.020056,172075,"Data");
   tex->SetTextColor(2);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
