void NewPlot(char* variable, char* imgName){

  // make a canvas
  TH1::SetDefaultSumw2();
  TCanvas *c1 = new TCanvas("c1", "", 600, 400);
  gStyle->SetOptStat(kFALSE);

  // root is incredibly unintuitive and unfriendly
  // https://root-forum.cern.ch/t/read-a-histogram-from-a-root-file/8930/3
  
  // new file
  TFile *fileM = TFile::Open("outFiles/output_Mid_events.root");
  // print list of existing hists to terminal
  fileM->GetListOfKeys()->Print();
  // get existing hist
  TH1F * hM = (TH1F*)fileM->Get(variable);
  // set color and draw h0 as "hist" to the canvas at the top of the file
  hM->SetTitle(variable);
  hM->SetLineColor(1);
  //hM->GetXaxis()->SetTitle(variable);
  hM->GetYaxis()->SetTitle("Events");
  hM->GetYaxis()->SetRangeUser(0, 6000);
  hM->GetXaxis()->SetRangeUser(0, 300);
  hM->Draw("hist");
  // repeat ad naseum more times
 
  TFile *fileVM = TFile::Open("outFiles/output_VeryMid_events.root");
  TH1F * hVM = (TH1F*)fileVM->Get(variable);
  hVM->SetLineColor(6);
  hVM->SetMarkerStyle(4);
  hVM->SetMarkerColor(4);
  // marker will not be drawn by default
  // draw with P to draw with the marker
  // https://root.cern/doc/master/classTHistPainter.html#HP01a
  hVM->Draw("P same");
  // weird default
  
  TFile *fileS = TFile::Open("outFiles/output_Small_events.root");
  TH1F * hS = (TH1F*)fileS->Get(variable);
  hS->SetLineColor(2);
  hS->Draw("same");

  TFile *fileVS = TFile::Open("outFiles/output_VerySmall_events.root");
  TH1F * hVS = (TH1F*)fileVS->Get(variable);
  hVS->SetLineColor(4);
  hVS->Draw("same");

  TFile *fileSM = TFile::Open("outFiles/output_sm_events.root");
  TH1F * hSM = (TH1F*)fileSM->Get(variable);
  hSM->SetLineColor(44);
  hSM->Draw("same");

  // add legend
  auto legendAbsEff = new TLegend(0.68, 0.7, 0.9, 0.9);
  legendAbsEff->AddEntry(hM, "Mid #alpha = 0.2");
  legendAbsEff->AddEntry(hVM, "VMid #alpha = 0.0002");
  legendAbsEff->AddEntry(hS, "Small #alpha = 0.1");
  legendAbsEff->AddEntry(hVS, "VSmall #alpha = 0.0001");
  legendAbsEff->AddEntry(hSM, "sm #alpha = 0");
  legendAbsEff->Draw();

  string s_imgName(imgName);
  s_imgName.append(".png");
  const char *c_full_imgName = s_imgName.c_str();
  c1->Print(c_full_imgName, "png");

}
