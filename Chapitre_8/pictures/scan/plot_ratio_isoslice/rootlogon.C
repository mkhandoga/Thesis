{
  //cout << endl << "Welcome to the ATLAS rootlogon.C" << endl;
  //
  // based on a style file from BaBar
  //

  //..BABAR style from RooLogon.C in workdir
  TStyle *atlasStyle= new TStyle("ATLAS","Atlas style");

  // use plain black on white colors
  Int_t icol=0;
  atlasStyle->SetFrameBorderMode(icol);
  atlasStyle->SetCanvasBorderMode(icol);
  atlasStyle->SetPadBorderMode(icol);
  atlasStyle->SetPadColor(icol);
  atlasStyle->SetCanvasColor(icol);
  atlasStyle->SetStatColor(icol);
  //atlasStyle->SetFillColor(icol);

  // set the paper & margin sizes
  atlasStyle->SetPaperSize(20,26);
  atlasStyle->SetPadTopMargin(0.07);
  atlasStyle->SetPadRightMargin(0.07);
  atlasStyle->SetPadBottomMargin(0.13);
  atlasStyle->SetPadLeftMargin(0.13);

  // use large fonts
  //Int_t font=72;
  Int_t font=42;
  Double_t tsize=0.05;
  atlasStyle->SetTextFont(font);

  atlasStyle->SetTextSize(tsize);
  atlasStyle->SetLabelFont(font,"x");
  atlasStyle->SetTitleFont(font,"x");
  atlasStyle->SetLabelFont(font,"y");
  atlasStyle->SetTitleFont(font,"y");
  atlasStyle->SetLabelFont(font,"z");
  atlasStyle->SetTitleFont(font,"z");

  atlasStyle->SetLabelSize(tsize,"x");
  atlasStyle->SetTitleSize(tsize,"x");
  atlasStyle->SetLabelSize(tsize,"y");
  atlasStyle->SetTitleSize(tsize,"y");
  atlasStyle->SetLabelSize(tsize,"z");
  atlasStyle->SetTitleSize(tsize,"z");

  // Xin:
  atlasStyle->SetTitleOffset(1.1,"X");
  atlasStyle->SetTitleOffset(1.2,"Y");

  //use bold lines and markers
  atlasStyle->SetMarkerStyle(20);
  atlasStyle->SetMarkerSize(1.2);
  atlasStyle->SetHistLineWidth(2.);
  atlasStyle->SetLineStyleString(2,"[12 12]"); // postscript dashes

  //get rid of X error bars and y error bar caps
  //atlasStyle->SetErrorX(0.001);

  //do not display any of the standard histogram decorations
  atlasStyle->SetOptTitle(0);
  //atlasStyle->SetOptStat(1111);
  atlasStyle->SetOptStat(0);
  //atlasStyle->SetOptFit(1111);
  atlasStyle->SetOptFit(0);

  // put tick marks on top and RHS of plots
  atlasStyle->SetPadTickX(1);
  atlasStyle->SetPadTickY(1);

  //gROOT->SetStyle("Plain");
  gROOT->SetStyle("ATLAS");
  gROOT->ForceStyle();

  // gSystem->Load("libRooFit.so");
  // using namespace RooFit;
  // gSystem->Load("libTMVA.so");
  // using namespace TMVA;
}
