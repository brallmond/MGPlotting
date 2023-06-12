#define BlankTest_cxx
#include "BlankTest.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

void BlankTest::Loop(TString outname)
{
  if (fChain == 0) return;

  Long64_t nentries = fChain->GetEntriesFast();

  //TFile* f = TFile::Open("output.root", "recreate");
  TFile* f = TFile::Open(outname, "recreate");
  TH1F* h_t1pt = new TH1F("h_t1pt", "", 100, 0, 200);
  TH1F* h_t1eta = new TH1F("h_t1eta", "", 100, -3, 3);
  TH1F* h_t2pt = new TH1F("h_t2pt", "", 100, 0, 200);
  TH1F* h_t2eta = new TH1F("h_t2eta", "", 100, -3, 3);
  TH1F* h_phpt = new TH1F("h_phpt", "", 100, 0, 200);
  TH1F* h_pheta = new TH1F("h_pheta", "", 100, -3, 3);
  TH1F* h_dRt1t2 = new TH1F("h_dRt1t2", "", 100, 0, 5);
  TH1F* h_dRt1ph = new TH1F("h_dRt1ph", "", 100, 0, 5);
  TH1F* h_dRt2ph = new TH1F("h_dRt2ph", "", 100, 0, 5);
  TH1F* h_mttg = new TH1F("h_mttg", "", 100, 0, 500);
  TH1F* h_mtt = new TH1F("h_mtt", "", 100, 0, 500);

  TH2F* h_mttg_mtt = new TH2F("h_mttg_mtt", "", 100, 0, 400, 100, 0, 400);

  double dR_t1t2; // dR between leading and subleading tau
  double dR_t1ph; // dR between leading tau and photon
  double dR_t2ph; // dR between subleading tau and photon

  double mttg;  // 3obj inv mass from tau tau gamma
  double mtt; // 2obj inv mass from tau tau

  //TH1F* h = new TH1F("h", "", 100, 0, 200);
  
  // Begin event loop
  Long64_t nbytes = 0, nb = 0;
  for (Long64_t jentry=0; jentry < nentries; ++jentry) {
    Long64_t ientry = LoadTree(jentry);
    if (ientry < 0) break;
    nb = fChain->GetEntry(jentry);   nbytes += nb;

// Print MC Particle Info
/*
    cout << "i" << '\t' << \
         "PID" << '\t' << \
         "Stat" << '\t' << \
         "Mom" << '\t' << \
         "PT" << endl;
*/
    // get good events, and store info. Ignore production mode for now.

    // TLorentzVectors are reinitialized to zero for each event
    TLorentzVector tau1;
    TLorentzVector tau2;
    TLorentzVector photon;
    // Begin loop on particles within event
    for (int i = 0; i < Particle_; ++i) {
      //cout << i << '\t' << \
        //Particle_PID[i] << '\t' << \
        //Particle_Status[i] << '\t' << \
        //Particle_Mother1[i] << '\t' << \
        //Particle_PT[i] << endl;

      // if tau, save
      if (Particle_PID[i] == 15 || Particle_PID[i] == -15) {
        // if tauA already filled, don't fill again
        if (tau1.Pt() == 0) { 
          tau1.SetPtEtaPhiE(Particle_PT[i], Particle_Eta[i], \
                            Particle_Phi[i], Particle_E[i]);
        }
        // if tauB already filled, don't fill again
        else if (tau2.Pt() == 0) {
          // if pt of 2nd object is higher than first
          // assign subleading tau then overwrite leading tau
          if (Particle_PT[i] > tau1.Pt()) {
            tau2 = tau1;
            tau1.SetPtEtaPhiE(Particle_PT[i], Particle_Eta[i], \
                              Particle_Phi[i], Particle_E[i]);
          }
          // fill subleading tau
          else {
            tau2.SetPtEtaPhiE(Particle_PT[i], Particle_Eta[i], \
                              Particle_Phi[i], Particle_E[i]);
          }
        }
      }
      // if photon, save
      else if (Particle_PID[i] == 22) {
        photon.SetPtEtaPhiE(Particle_PT[i], Particle_Eta[i], \
                            Particle_Phi[i], Particle_E[i]);
      }
    }
    // now have 2 taus, 1 photon, fill hists
    h_t1pt->Fill(tau1.Pt());
    h_t1eta->Fill(tau1.Eta());
    h_t2pt->Fill(tau2.Pt());
    h_t2eta->Fill(tau2.Eta());
    h_phpt->Fill(photon.Pt());
    h_pheta->Fill(photon.Eta());

    // compute dRs between objects
    dR_t1t2 = tau1.DeltaR(tau2);
    h_dRt1t2->Fill(dR_t1t2);
    dR_t1ph = tau1.DeltaR(photon);
    h_dRt1ph->Fill(dR_t1ph);
    dR_t2ph = tau2.DeltaR(photon);
    h_dRt2ph->Fill(dR_t2ph);

    //cout << dR_t1t2 << " " << dR_t1ph << " " << dR_t2ph << endl;

    // computer 3 obj inv mass
    mttg = (tau1 + tau2 + photon).M();
    h_mttg->Fill(mttg);
    // compute ditau inv mass
    mtt = (tau1 + tau2).M();
    h_mtt->Fill(mtt);

    // fill 2D hist
    h_mttg_mtt->Fill(mttg, mtt);

    //cout << mttg << " " << mtt << endl;


// Count types of gammas (isr vs higgs) is it really isr?
/*
      if (Particle_PID[i] == 22) {
        //if (Particle_Mother1[i] == 2) h->Fill(Particle_PT[i]);
        if (Particle_Mother1[i] == 2) GfH++;
        if (Particle_Mother1[i] == 0) GnfH++;
      }
*/
  }// end of event loop

  h_t1pt->Write();
  h_t1eta->Write();
  h_t2pt->Write();
  h_t2eta->Write();
  h_phpt->Write();
  h_pheta->Write();
  h_dRt1t2->Write();
  h_dRt1ph->Write();
  h_dRt2ph->Write();
  h_mttg->Write();
  h_mtt->Write();
  h_mttg_mtt->Write();

  f->Close();

}
