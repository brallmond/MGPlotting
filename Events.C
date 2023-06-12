#define Events_cxx
#include "Events.h"
#include <TH2.h>
#include <TStyle.h>
#include <TCanvas.h>

//void Events::Loop()
void Events::Loop(TString outname="")
{
   if (fChain == 0) return;

   Long64_t nentries = fChain->GetEntriesFast();

   if (outname == "") { outname = "new_temp_file.root"; }
   //TFile* f = TFile::Open("output_temp.root", "recreate");
   TFile* f = TFile::Open(outname, "recreate");

   TH1F* H_mass     = new TH1F("H_mass", "", 200, 50, 150);

   TH1F* t1_pt     = new TH1F("t1_pt", "", 50, 0, 500);
   TH1F* t1_eta    = new TH1F("t1_eta", "", 50, -5, 5);
   TH1F* t1_phi    = new TH1F("t1_phi", "", 50, -6.3, 6.3);
   TH1F* t1_energy = new TH1F("t1_energy", "", 50, 0, 500);

   TH1F* t2_pt     = new TH1F("t2_pt", "", 50, 0, 500);
   TH1F* t2_eta    = new TH1F("t2_eta", "", 50, -5, 5);
   TH1F* t2_phi    = new TH1F("t2_phi", "", 50, -6.3, 6.3);
   TH1F* t2_energy = new TH1F("t2_energy", "", 50, 0, 500);

   Long64_t nbytes = 0, nb = 0;
   int nHiggsDecays = 0;
   for (Long64_t jentry=0; jentry<nentries;jentry++) {
      Long64_t ientry = LoadTree(jentry);
      if (ientry < 0) break;
      nb = fChain->GetEntry(jentry);   nbytes += nb;
      // if (Cut(ientry) < 0) continue;

      double genParticles_size = recoGenParticles_genParticles__GEN_obj.size();

      int particlePDGID = 0;
      int particleStatus = 0;
      double particlePt = 0.0;
      double particleEta = 0.0;
      double particlePhi = 0.0;
      double particleEnergy = 0.0;

      int nTaus = 0;
      TLorentzVector Tau1;
      TLorentzVector Tau2;
      double higgsMass = 0.0;

      for (int i = 0; i < genParticles_size; i++) {
        //if (recoGenParticles_genParticles__GEN_obj[i].isPromptFinalState() > 0) {
        if (recoGenParticles_genParticles__GEN_obj[i].isPromptDecayed() > 0) {
          particlePDGID = recoGenParticles_genParticles__GEN_obj[i].pdgId();

          if (particlePDGID == 15 || particlePDGID == -15) {
            //branch is type vector<reco::GenParticle>, so [i] is type reco::GenParticle
            reco::GenParticle particle = recoGenParticles_genParticles__GEN_obj[i];
            particlePDGID  = particle.pdgId();
            particleStatus = particle.status();
            particlePt     = particle.pt();
            particleEta    = particle.eta();
            particlePhi    = particle.phi();
            particleEnergy = particle.energy();

            if (nTaus == 0) {
              Tau1.SetPtEtaPhiE(particlePt, particleEta, particlePhi, particleEnergy);
            }
            if (nTaus == 1) {
              Tau2.SetPtEtaPhiE(particlePt, particleEta, particlePhi, particleEnergy);
            }
            // sort taus by pt
            
            nTaus += 1;
            //std::cout << "###########" << std::endl;
            //std::cout << jentry << '\t' << i << '\t Tau: ' << nTaus << std::endl;
            //std::cout << particlePDGID << '\t' << particleStatus << std::endl;
            //std::cout << particlePt << '\t' << particleEta << '\t' << particlePhi << '\t' << particleEnergy << std::endl;

            if (nTaus == 2) { 
              nHiggsDecays += 1; 
              nTaus = 0; 

              //tau1 and tau2 kinems
              if (Tau2.Pt() > Tau1.Pt()) {
                t1_pt->Fill(Tau2.Pt());
                t1_eta->Fill(Tau2.Eta());
                t1_phi->Fill(Tau2.Phi());
                t1_energy->Fill(Tau2.Energy());

                t2_pt->Fill(Tau1.Pt());
                t2_eta->Fill(Tau1.Eta());
                t2_phi->Fill(Tau1.Phi());
                t2_energy->Fill(Tau1.Energy());
              }
                   
              else{
                t1_pt->Fill(Tau1.Pt());
                t1_eta->Fill(Tau1.Eta());
                t1_phi->Fill(Tau1.Phi());
                t1_energy->Fill(Tau1.Energy());

                t2_pt->Fill(Tau2.Pt());
                t2_eta->Fill(Tau2.Eta());
                t2_phi->Fill(Tau2.Phi());
                t2_energy->Fill(Tau2.Energy());
              }

              higgsMass = (Tau1 + Tau2).M();
              //std::cout << jentry << '\t' << higgsMass << std::endl;
              H_mass->Fill(higgsMass);
            }
          }
        }
      }
   }
   std::cout << "done---------------------------" << std::endl;
   std::cout << "Higgs Decays " << nHiggsDecays << std::endl;

   H_mass->Write();
   t1_pt->Write();
   t1_eta->Write();
   t1_phi->Write();
   t1_energy->Write();
   t2_pt->Write();
   t2_eta->Write();
   t2_phi->Write();
   t2_energy->Write();
   f->Close();
}






