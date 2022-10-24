void Plot2DMasses(char* in_file, char* img_name){

  // make a canvas
  TH1::SetDefaultSumw2();
  TCanvas *c1 = new TCanvas("c1", "", 600, 400);
  gStyle->SetOptStat(kFALSE);

  // root is incredibly unintuitive and unfriendly
  // https://root-forum.cern.ch/t/read-a-histogram-from-a-root-file/8930/3
  
  // new file
  TFile *file2D = TFile::Open(in_file);
  // print list of existing hists to terminal
  file2D->GetListOfKeys()->Print();
  // get existing hist
  TH2F * h2D = (TH2F*)file2D->Get("h_mttg_mtt");
  // set color and draw h0 as "hist" to the canvas at the top of the file
  h2D->SetTitle("2D Plot of M(#tau#tau#gamma) vs M(#tau#tau)");
  h2D->SetLineColor(1);
  h2D->GetXaxis()->SetTitle("M_{#tau#tau#gamma}");
  h2D->GetYaxis()->SetTitle("M_{#tau#tau}");
  h2D->GetYaxis()->SetRangeUser(0, 300);
  h2D->GetXaxis()->SetRangeUser(0, 300);
  h2D->Draw("COLZ");

  // add legend
  /*
  auto legendAbsEff = new TLegend(0.68, 0.7, 0.9, 0.9);
  legendAbsEff->AddEntry(h2D, "DM All Processes");
  legendAbsEff->AddEntry(h2DH, "Higgs Only");
  legendAbsEff->AddEntry(hSM, "SM");
  legendAbsEff->Draw();
  */

  string s_img_name(img_name);
  s_img_name.append(".png");
  const char *c_full_img_name = s_img_name.c_str();
  c1->Print(c_full_img_name, "png");

}
