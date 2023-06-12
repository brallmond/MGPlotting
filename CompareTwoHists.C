void CompareTwoHists(char* variable, char* imgName, 
             TString inputOne, TString inputTwo){
  // make canvas with default error bars
  TH1::SetDefaultSumw2();
  TCanvas *c1 = new TCanvas("c1", "", 600,400);
  //gStyle->SetOptStat(kFALSE);

  // new file
  TFile *fileOne = TFile::Open(inputOne);
  TH1F * histOne = (TH1F*)fileOne->Get(variable);
  histOne->SetTitle(variable);
  histOne->SetLineColor(1);
  histOne->GetYaxis()->SetTitle("Events");
  histOne->Draw("hist"); 

  // second file
  TFile *fileTwo = TFile::Open(inputTwo);
  TH1F * histTwo = (TH1F*)fileTwo->Get(variable);
  histTwo->SetLineColor(2);
  //histTwo->Draw("P same");
  histTwo->Draw("same");

  // add legend
  auto legend = new TLegend(0.68, 0.7, 0.9, 0.9);
  legend->AddEntry(histOne, inputOne);
  legend->AddEntry(histTwo, inputTwo);
  legend->Draw();

  string s_imgName(imgName);
  s_imgName.append(".png");
  const char *c_full_imgName = s_imgName.c_str();
  c1->Print(c_full_imgName, "png");

}
