//#define lumi "5.0"
#include "TLatex.h"
#include "TString.h"
#include <string>

inline void DrawLumi(float xx, float yy, const char* lumi) {

  TLatex l;
  l.SetNDC(1);
  l.SetTextSize(0.033); 
  l.DrawLatex( xx,yy,TString("#int L = ")+lumi+TString(" fb^{-1}") );

}

inline void DrawAP(float x, float y, bool useNDC=true) {
  TLatex* l =  new TLatex();
  l->SetNDC(useNDC);
  l->SetTextSize(0.04);
  l->SetTextAlign(13);  //align at top
  l->SetTextFont(72);
  l->DrawLatex(x,y,"ATLAS");

  //Now Preliminary
  l->SetTextFont(42);
  l->DrawLatex(x+0.125,y,"Preliminary");

}
