void CopyOfNewPlot(char* variable, char* imgName){

  // make a canvas
  TH1::SetDefaultSumw2();
  TCanvas *c1 = new TCanvas("c1", "", 600, 400);
  gStyle->SetOptStat(kFALSE);

  // root is incredibly unintuitive and unfriendly
  // https://root-forum.cern.ch/t/read-a-histogram-from-a-root-file/8930/3
  
  // new file
  TFile *fileDM = TFile::Open("outFiles/output_DMmid_pptaptana.root");
  // print list of existing hists to terminal
  fileDM->GetListOfKeys()->Print();
  // get existing hist
  TH1F * hDM = (TH1F*)fileDM->Get(variable);
  // set color and draw h0 as "hist" to the canvas at the top of the file
  hDM->SetTitle(variable);
  hDM->SetLineColor(1);
  //hDM->GetXaxis()->SetTitle(variable);
  hDM->GetYaxis()->SetTitle("Events");
  hDM->GetYaxis()->SetRangeUser(0, 1000);
  hDM->GetXaxis()->SetRangeUser(-3, 3);
  hDM->Draw("hist");
  // repeat ad naseum more times
 
  TFile *fileDMH = TFile::Open("outFiles/signal_only/output_DMmid_ppHtaptana.root");
  TH1F * hDMH = (TH1F*)fileDMH->Get(variable);
  hDMH->SetLineColor(4);
  //hDMH->SetMarkerStyle(4);
  //hDMH->SetMarkerColor(4);
  // marker will not be drawn by default
  // draw with P to draw with the marker
  // https://root.cern/doc/master/classTHistPainter.html#HP01a
  hDMH->Draw("same");
  // weird default
  
  TFile *fileSM = TFile::Open("outFiles/output_SM_pptaptana.root");
  TH1F * hSM = (TH1F*)fileSM->Get(variable);
  hSM->SetLineColor(2);
  hSM->Draw("same");

  // add legend
  auto legendAbsEff = new TLegend(0.68, 0.7, 0.9, 0.9);
  legendAbsEff->AddEntry(hDM, "All Processes");
  legendAbsEff->AddEntry(hDMH, "Higgs Only");
  legendAbsEff->AddEntry(hSM, "Non-Higgs Bkgds");
  legendAbsEff->Draw();

  string s_imgName(imgName);
  s_imgName.append(".png");
  const char *c_full_imgName = s_imgName.c_str();
  c1->Print(c_full_imgName, "png");

}
