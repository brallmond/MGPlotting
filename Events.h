//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Jun  9 10:33:42 2023 by ROOT version 6.22/09
// from TTree Events/
// found on file: root_output/HIG-Run3Winter22wmLHEGEN-00007_1686248822.root
//////////////////////////////////////////////////////////

#ifndef Events_h
#define Events_h

#include <TROOT.h>
#include <TChain.h>
#include <TFile.h>

// Header file for the classes stored in the TTree if any.
#include "DataFormats/Provenance/interface/EventAuxiliary.h"
#include "vector"
#include "vector"
#include "vector"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"
#include "DataFormats/Common/interface/Wrapper.h"

class Events {
public :
   TTree          *fChain;   //!pointer to the analyzed TTree or TChain
   Int_t           fCurrent; //!current Tree number in a TChain

// Fixed size dimensions of array or collections stored in the TTree if any.
   static constexpr Int_t kMaxGenEventInfoProduct_generator__GEN = 1;
   static constexpr Int_t kMaxLHEEventProduct_externalLHEProducer__GEN = 1;
   static constexpr Int_t kMaxfloatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_GEN = 1;
   static constexpr Int_t kMaxdouble_ak4GenJets_rho_GEN = 1;
   static constexpr Int_t kMaxdouble_ak4GenJetsNoNu_rho_GEN = 1;
   static constexpr Int_t kMaxdouble_ak8GenJets_rho_GEN = 1;
   static constexpr Int_t kMaxdouble_ak8GenJetsNoNu_rho_GEN = 1;
   static constexpr Int_t kMaxdouble_ak4GenJets_sigma_GEN = 1;
   static constexpr Int_t kMaxdouble_ak4GenJetsNoNu_sigma_GEN = 1;
   static constexpr Int_t kMaxdouble_ak8GenJets_sigma_GEN = 1;
   static constexpr Int_t kMaxdouble_ak8GenJetsNoNu_sigma_GEN = 1;
   static constexpr Int_t kMaxedmHepMCProduct_generatorSmeared__GEN = 1;
   static constexpr Int_t kMaxedmRandomEngineStates_randomEngineStateProducer__GEN = 1;
   static constexpr Int_t kMaxedmTriggerResults_TriggerResults__GEN = 1;
   static constexpr Int_t kMaxfloat_genParticles_t0_GEN = 1;
   static constexpr Int_t kMaxdoubles_ak4GenJets_rhos_GEN = 1;
   static constexpr Int_t kMaxdoubles_ak4GenJetsNoNu_rhos_GEN = 1;
   static constexpr Int_t kMaxdoubles_ak8GenJets_rhos_GEN = 1;
   static constexpr Int_t kMaxdoubles_ak8GenJetsNoNu_rhos_GEN = 1;
   static constexpr Int_t kMaxdoubles_ak4GenJets_sigmas_GEN = 1;
   static constexpr Int_t kMaxdoubles_ak4GenJetsNoNu_sigmas_GEN = 1;
   static constexpr Int_t kMaxdoubles_ak8GenJets_sigmas_GEN = 1;
   static constexpr Int_t kMaxdoubles_ak8GenJetsNoNu_sigmas_GEN = 1;
   static constexpr Int_t kMaxints_genParticles__GEN = 1;
   static constexpr Int_t kMaxrecoGenJets_ak4GenJets__GEN = 1;
   static constexpr Int_t kMaxrecoGenJets_ak4GenJetsNoNu__GEN = 1;
   static constexpr Int_t kMaxrecoGenJets_ak8GenJets__GEN = 1;
   static constexpr Int_t kMaxrecoGenJets_ak8GenJetsNoNu__GEN = 1;
   static constexpr Int_t kMaxrecoGenMETs_genMetCalo__GEN = 1;
   static constexpr Int_t kMaxrecoGenMETs_genMetTrue__GEN = 1;
   static constexpr Int_t kMaxrecoGenParticles_genParticles__GEN = 1;

   // Declaration of leaf types
   edm::EventAuxiliary *EventAuxiliary;
   vector<edm::StoredProductProvenance> *EventProductProvenance;
   vector<edm::Hash<1> > *EventSelections;
   vector<unsigned short> *BranchListIndexes;
 //edm::Wrapper<GenEventInfoProduct> *GenEventInfoProduct_generator__GEN_;
   Bool_t          GenEventInfoProduct_generator__GEN_present;
   GenEventInfoProduct GenEventInfoProduct_generator__GEN_obj;
 //edm::Wrapper<LHEEventProduct> *LHEEventProduct_externalLHEProducer__GEN_;
   Bool_t          LHEEventProduct_externalLHEProducer__GEN_present;
   LHEEventProduct LHEEventProduct_externalLHEProducer__GEN_obj;
 //edm::Wrapper<ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> > *floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_GEN_;
   Bool_t          floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_GEN_present;
   ROOT::Math::PositionVector3D<ROOT::Math::Cartesian3D<float>,ROOT::Math::DefaultCoordinateSystemTag> floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_GEN_obj;
 //edm::Wrapper<double> *double_ak4GenJets_rho_GEN_;
   Bool_t          double_ak4GenJets_rho_GEN_present;
   Double_t        double_ak4GenJets_rho_GEN_obj;
 //edm::Wrapper<double> *double_ak4GenJetsNoNu_rho_GEN_;
   Bool_t          double_ak4GenJetsNoNu_rho_GEN_present;
   Double_t        double_ak4GenJetsNoNu_rho_GEN_obj;
 //edm::Wrapper<double> *double_ak8GenJets_rho_GEN_;
   Bool_t          double_ak8GenJets_rho_GEN_present;
   Double_t        double_ak8GenJets_rho_GEN_obj;
 //edm::Wrapper<double> *double_ak8GenJetsNoNu_rho_GEN_;
   Bool_t          double_ak8GenJetsNoNu_rho_GEN_present;
   Double_t        double_ak8GenJetsNoNu_rho_GEN_obj;
 //edm::Wrapper<double> *double_ak4GenJets_sigma_GEN_;
   Bool_t          double_ak4GenJets_sigma_GEN_present;
   Double_t        double_ak4GenJets_sigma_GEN_obj;
 //edm::Wrapper<double> *double_ak4GenJetsNoNu_sigma_GEN_;
   Bool_t          double_ak4GenJetsNoNu_sigma_GEN_present;
   Double_t        double_ak4GenJetsNoNu_sigma_GEN_obj;
 //edm::Wrapper<double> *double_ak8GenJets_sigma_GEN_;
   Bool_t          double_ak8GenJets_sigma_GEN_present;
   Double_t        double_ak8GenJets_sigma_GEN_obj;
 //edm::Wrapper<double> *double_ak8GenJetsNoNu_sigma_GEN_;
   Bool_t          double_ak8GenJetsNoNu_sigma_GEN_present;
   Double_t        double_ak8GenJetsNoNu_sigma_GEN_obj;
 //edm::Wrapper<edm::HepMCProduct> *edmHepMCProduct_generatorSmeared__GEN_;
   Bool_t          edmHepMCProduct_generatorSmeared__GEN_present;
   edm::HepMCProduct edmHepMCProduct_generatorSmeared__GEN_obj;
 //edm::Wrapper<edm::RandomEngineStates> *edmRandomEngineStates_randomEngineStateProducer__GEN_;
   Bool_t          edmRandomEngineStates_randomEngineStateProducer__GEN_present;
   edm::RandomEngineStates edmRandomEngineStates_randomEngineStateProducer__GEN_obj;
 //edm::Wrapper<edm::TriggerResults> *edmTriggerResults_TriggerResults__GEN_;
   Bool_t          edmTriggerResults_TriggerResults__GEN_present;
   edm::TriggerResults edmTriggerResults_TriggerResults__GEN_obj;
 //edm::Wrapper<float> *float_genParticles_t0_GEN_;
   Bool_t          float_genParticles_t0_GEN_present;
   Float_t         float_genParticles_t0_GEN_obj;
 //edm::Wrapper<vector<double> > *doubles_ak4GenJets_rhos_GEN_;
   Bool_t          doubles_ak4GenJets_rhos_GEN_present;
   vector<double>  doubles_ak4GenJets_rhos_GEN_obj;
 //edm::Wrapper<vector<double> > *doubles_ak4GenJetsNoNu_rhos_GEN_;
   Bool_t          doubles_ak4GenJetsNoNu_rhos_GEN_present;
   vector<double>  doubles_ak4GenJetsNoNu_rhos_GEN_obj;
 //edm::Wrapper<vector<double> > *doubles_ak8GenJets_rhos_GEN_;
   Bool_t          doubles_ak8GenJets_rhos_GEN_present;
   vector<double>  doubles_ak8GenJets_rhos_GEN_obj;
 //edm::Wrapper<vector<double> > *doubles_ak8GenJetsNoNu_rhos_GEN_;
   Bool_t          doubles_ak8GenJetsNoNu_rhos_GEN_present;
   vector<double>  doubles_ak8GenJetsNoNu_rhos_GEN_obj;
 //edm::Wrapper<vector<double> > *doubles_ak4GenJets_sigmas_GEN_;
   Bool_t          doubles_ak4GenJets_sigmas_GEN_present;
   vector<double>  doubles_ak4GenJets_sigmas_GEN_obj;
 //edm::Wrapper<vector<double> > *doubles_ak4GenJetsNoNu_sigmas_GEN_;
   Bool_t          doubles_ak4GenJetsNoNu_sigmas_GEN_present;
   vector<double>  doubles_ak4GenJetsNoNu_sigmas_GEN_obj;
 //edm::Wrapper<vector<double> > *doubles_ak8GenJets_sigmas_GEN_;
   Bool_t          doubles_ak8GenJets_sigmas_GEN_present;
   vector<double>  doubles_ak8GenJets_sigmas_GEN_obj;
 //edm::Wrapper<vector<double> > *doubles_ak8GenJetsNoNu_sigmas_GEN_;
   Bool_t          doubles_ak8GenJetsNoNu_sigmas_GEN_present;
   vector<double>  doubles_ak8GenJetsNoNu_sigmas_GEN_obj;
 //edm::Wrapper<vector<int> > *ints_genParticles__GEN_;
   Bool_t          ints_genParticles__GEN_present;
   vector<int>     ints_genParticles__GEN_obj;
 //edm::Wrapper<vector<reco::GenJet> > *recoGenJets_ak4GenJets__GEN_;
   Bool_t          recoGenJets_ak4GenJets__GEN_present;
   vector<reco::GenJet> recoGenJets_ak4GenJets__GEN_obj;
 //edm::Wrapper<vector<reco::GenJet> > *recoGenJets_ak4GenJetsNoNu__GEN_;
   Bool_t          recoGenJets_ak4GenJetsNoNu__GEN_present;
   vector<reco::GenJet> recoGenJets_ak4GenJetsNoNu__GEN_obj;
 //edm::Wrapper<vector<reco::GenJet> > *recoGenJets_ak8GenJets__GEN_;
   Bool_t          recoGenJets_ak8GenJets__GEN_present;
   vector<reco::GenJet> recoGenJets_ak8GenJets__GEN_obj;
 //edm::Wrapper<vector<reco::GenJet> > *recoGenJets_ak8GenJetsNoNu__GEN_;
   Bool_t          recoGenJets_ak8GenJetsNoNu__GEN_present;
   vector<reco::GenJet> recoGenJets_ak8GenJetsNoNu__GEN_obj;
 //edm::Wrapper<vector<reco::GenMET> > *recoGenMETs_genMetCalo__GEN_;
   Bool_t          recoGenMETs_genMetCalo__GEN_present;
   vector<reco::GenMET> recoGenMETs_genMetCalo__GEN_obj;
 //edm::Wrapper<vector<reco::GenMET> > *recoGenMETs_genMetTrue__GEN_;
   Bool_t          recoGenMETs_genMetTrue__GEN_present;
   vector<reco::GenMET> recoGenMETs_genMetTrue__GEN_obj;
 //edm::Wrapper<vector<reco::GenParticle> > *recoGenParticles_genParticles__GEN_;
   Bool_t          recoGenParticles_genParticles__GEN_present;
   vector<reco::GenParticle> recoGenParticles_genParticles__GEN_obj;

   // List of branches
   TBranch        *b_EventAuxiliary;   //!
   TBranch        *b_EventProductProvenance;   //!
   TBranch        *b_EventSelections;   //!
   TBranch        *b_BranchListIndexes;   //!
   TBranch        *b_GenEventInfoProduct_generator__GEN_present;   //!
   TBranch        *b_GenEventInfoProduct_generator__GEN_obj;   //!
   TBranch        *b_LHEEventProduct_externalLHEProducer__GEN_present;   //!
   TBranch        *b_LHEEventProduct_externalLHEProducer__GEN_obj;   //!
   TBranch        *b_floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_GEN_present;   //!
   TBranch        *b_floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_GEN_obj;   //!
   TBranch        *b_double_ak4GenJets_rho_GEN_present;   //!
   TBranch        *b_double_ak4GenJets_rho_GEN_obj;   //!
   TBranch        *b_double_ak4GenJetsNoNu_rho_GEN_present;   //!
   TBranch        *b_double_ak4GenJetsNoNu_rho_GEN_obj;   //!
   TBranch        *b_double_ak8GenJets_rho_GEN_present;   //!
   TBranch        *b_double_ak8GenJets_rho_GEN_obj;   //!
   TBranch        *b_double_ak8GenJetsNoNu_rho_GEN_present;   //!
   TBranch        *b_double_ak8GenJetsNoNu_rho_GEN_obj;   //!
   TBranch        *b_double_ak4GenJets_sigma_GEN_present;   //!
   TBranch        *b_double_ak4GenJets_sigma_GEN_obj;   //!
   TBranch        *b_double_ak4GenJetsNoNu_sigma_GEN_present;   //!
   TBranch        *b_double_ak4GenJetsNoNu_sigma_GEN_obj;   //!
   TBranch        *b_double_ak8GenJets_sigma_GEN_present;   //!
   TBranch        *b_double_ak8GenJets_sigma_GEN_obj;   //!
   TBranch        *b_double_ak8GenJetsNoNu_sigma_GEN_present;   //!
   TBranch        *b_double_ak8GenJetsNoNu_sigma_GEN_obj;   //!
   TBranch        *b_edmHepMCProduct_generatorSmeared__GEN_present;   //!
   TBranch        *b_edmHepMCProduct_generatorSmeared__GEN_obj;   //!
   TBranch        *b_edmRandomEngineStates_randomEngineStateProducer__GEN_present;   //!
   TBranch        *b_edmRandomEngineStates_randomEngineStateProducer__GEN_obj;   //!
   TBranch        *b_edmTriggerResults_TriggerResults__GEN_present;   //!
   TBranch        *b_edmTriggerResults_TriggerResults__GEN_obj;   //!
   TBranch        *b_float_genParticles_t0_GEN_present;   //!
   TBranch        *b_float_genParticles_t0_GEN_obj;   //!
   TBranch        *b_doubles_ak4GenJets_rhos_GEN_present;   //!
   TBranch        *b_doubles_ak4GenJets_rhos_GEN_obj;   //!
   TBranch        *b_doubles_ak4GenJetsNoNu_rhos_GEN_present;   //!
   TBranch        *b_doubles_ak4GenJetsNoNu_rhos_GEN_obj;   //!
   TBranch        *b_doubles_ak8GenJets_rhos_GEN_present;   //!
   TBranch        *b_doubles_ak8GenJets_rhos_GEN_obj;   //!
   TBranch        *b_doubles_ak8GenJetsNoNu_rhos_GEN_present;   //!
   TBranch        *b_doubles_ak8GenJetsNoNu_rhos_GEN_obj;   //!
   TBranch        *b_doubles_ak4GenJets_sigmas_GEN_present;   //!
   TBranch        *b_doubles_ak4GenJets_sigmas_GEN_obj;   //!
   TBranch        *b_doubles_ak4GenJetsNoNu_sigmas_GEN_present;   //!
   TBranch        *b_doubles_ak4GenJetsNoNu_sigmas_GEN_obj;   //!
   TBranch        *b_doubles_ak8GenJets_sigmas_GEN_present;   //!
   TBranch        *b_doubles_ak8GenJets_sigmas_GEN_obj;   //!
   TBranch        *b_doubles_ak8GenJetsNoNu_sigmas_GEN_present;   //!
   TBranch        *b_doubles_ak8GenJetsNoNu_sigmas_GEN_obj;   //!
   TBranch        *b_ints_genParticles__GEN_present;   //!
   TBranch        *b_ints_genParticles__GEN_obj;   //!
   TBranch        *b_recoGenJets_ak4GenJets__GEN_present;   //!
   TBranch        *b_recoGenJets_ak4GenJets__GEN_obj;   //!
   TBranch        *b_recoGenJets_ak4GenJetsNoNu__GEN_present;   //!
   TBranch        *b_recoGenJets_ak4GenJetsNoNu__GEN_obj;   //!
   TBranch        *b_recoGenJets_ak8GenJets__GEN_present;   //!
   TBranch        *b_recoGenJets_ak8GenJets__GEN_obj;   //!
   TBranch        *b_recoGenJets_ak8GenJetsNoNu__GEN_present;   //!
   TBranch        *b_recoGenJets_ak8GenJetsNoNu__GEN_obj;   //!
   TBranch        *b_recoGenMETs_genMetCalo__GEN_present;   //!
   TBranch        *b_recoGenMETs_genMetCalo__GEN_obj;   //!
   TBranch        *b_recoGenMETs_genMetTrue__GEN_present;   //!
   TBranch        *b_recoGenMETs_genMetTrue__GEN_obj;   //!
   TBranch        *b_recoGenParticles_genParticles__GEN_present;   //!
   TBranch        *b_recoGenParticles_genParticles__GEN_obj;   //!

   //Events(TTree *tree=0);
   Events(TString inname);
   virtual ~Events();
   virtual Int_t    Cut(Long64_t entry);
   virtual Int_t    GetEntry(Long64_t entry);
   virtual Long64_t LoadTree(Long64_t entry);
   virtual void     Init(TTree *tree);
   //virtual void     Loop();
   virtual void     Loop(TString outname);
   virtual Bool_t   Notify();
   virtual void     Show(Long64_t entry = -1);
};

#endif

#ifdef Events_cxx
//Events::Events(TTree *tree) : fChain(0) 
Events::Events(TString inname)
{
// if parameter tree is not specified (or zero), connect the file
// used to generate this class and read the Tree.

   // wildass nullptr makes this work
   TTree* tree = nullptr;
   if (tree == 0) {
      //TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject("root_output/HIG-Run3Winter22wmLHEGEN-00007_1686248822.root");
      TFile *f = (TFile*)gROOT->GetListOfFiles()->FindObject(inname);
      if (!f || !f->IsOpen()) {
         //f = new TFile("root_output/HIG-Run3Winter22wmLHEGEN-00007_1686248822.root");
         f = new TFile(inname);
      }
      f->GetObject("Events",tree);

   }
   Init(tree);
}

Events::~Events()
{
   if (!fChain) return;
   delete fChain->GetCurrentFile();
}

Int_t Events::GetEntry(Long64_t entry)
{
// Read contents of entry.
   if (!fChain) return 0;
   return fChain->GetEntry(entry);
}
Long64_t Events::LoadTree(Long64_t entry)
{
// Set the environment to read one entry
   if (!fChain) return -5;
   Long64_t centry = fChain->LoadTree(entry);
   if (centry < 0) return centry;
   if (fChain->GetTreeNumber() != fCurrent) {
      fCurrent = fChain->GetTreeNumber();
      Notify();
   }
   return centry;
}

void Events::Init(TTree *tree)
{
   // The Init() function is called when the selector needs to initialize
   // a new tree or chain. Typically here the branch addresses and branch
   // pointers of the tree will be set.
   // It is normally not necessary to make changes to the generated
   // code, but the routine can be extended by the user if needed.
   // Init() will be called many times when running on PROOF
   // (once per file to be processed).

   // Set object pointer
   EventAuxiliary = 0;
   EventProductProvenance = 0;
   EventSelections = 0;
   BranchListIndexes = 0;
   // Set branch addresses and branch pointers
   if (!tree) return;
   fChain = tree;
   fCurrent = -1;
   fChain->SetMakeClass(1);

   fChain->SetBranchAddress("EventAuxiliary", &EventAuxiliary, &b_EventAuxiliary);
   fChain->SetBranchAddress("EventProductProvenance", &EventProductProvenance, &b_EventProductProvenance);
   fChain->SetBranchAddress("EventSelections", &EventSelections, &b_EventSelections);
   fChain->SetBranchAddress("BranchListIndexes", &BranchListIndexes, &b_BranchListIndexes);
   fChain->SetBranchAddress("GenEventInfoProduct_generator__GEN.present", &GenEventInfoProduct_generator__GEN_present, &b_GenEventInfoProduct_generator__GEN_present);
   fChain->SetBranchAddress("GenEventInfoProduct_generator__GEN.obj", &GenEventInfoProduct_generator__GEN_obj, &b_GenEventInfoProduct_generator__GEN_obj);
   fChain->SetBranchAddress("LHEEventProduct_externalLHEProducer__GEN.present", &LHEEventProduct_externalLHEProducer__GEN_present, &b_LHEEventProduct_externalLHEProducer__GEN_present);
   fChain->SetBranchAddress("LHEEventProduct_externalLHEProducer__GEN.obj", &LHEEventProduct_externalLHEProducer__GEN_obj, &b_LHEEventProduct_externalLHEProducer__GEN_obj);
   fChain->SetBranchAddress("floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_GEN.present", &floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_GEN_present, &b_floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_GEN_present);
   fChain->SetBranchAddress("floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_GEN.obj", &floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_GEN_obj, &b_floatROOTMathCartesian3DROOTMathDefaultCoordinateSystemTagROOTMathPositionVector3D_genParticles_xyz0_GEN_obj);
   fChain->SetBranchAddress("double_ak4GenJets_rho_GEN.present", &double_ak4GenJets_rho_GEN_present, &b_double_ak4GenJets_rho_GEN_present);
   fChain->SetBranchAddress("double_ak4GenJets_rho_GEN.obj", &double_ak4GenJets_rho_GEN_obj, &b_double_ak4GenJets_rho_GEN_obj);
   fChain->SetBranchAddress("double_ak4GenJetsNoNu_rho_GEN.present", &double_ak4GenJetsNoNu_rho_GEN_present, &b_double_ak4GenJetsNoNu_rho_GEN_present);
   fChain->SetBranchAddress("double_ak4GenJetsNoNu_rho_GEN.obj", &double_ak4GenJetsNoNu_rho_GEN_obj, &b_double_ak4GenJetsNoNu_rho_GEN_obj);
   fChain->SetBranchAddress("double_ak8GenJets_rho_GEN.present", &double_ak8GenJets_rho_GEN_present, &b_double_ak8GenJets_rho_GEN_present);
   fChain->SetBranchAddress("double_ak8GenJets_rho_GEN.obj", &double_ak8GenJets_rho_GEN_obj, &b_double_ak8GenJets_rho_GEN_obj);
   fChain->SetBranchAddress("double_ak8GenJetsNoNu_rho_GEN.present", &double_ak8GenJetsNoNu_rho_GEN_present, &b_double_ak8GenJetsNoNu_rho_GEN_present);
   fChain->SetBranchAddress("double_ak8GenJetsNoNu_rho_GEN.obj", &double_ak8GenJetsNoNu_rho_GEN_obj, &b_double_ak8GenJetsNoNu_rho_GEN_obj);
   fChain->SetBranchAddress("double_ak4GenJets_sigma_GEN.present", &double_ak4GenJets_sigma_GEN_present, &b_double_ak4GenJets_sigma_GEN_present);
   fChain->SetBranchAddress("double_ak4GenJets_sigma_GEN.obj", &double_ak4GenJets_sigma_GEN_obj, &b_double_ak4GenJets_sigma_GEN_obj);
   fChain->SetBranchAddress("double_ak4GenJetsNoNu_sigma_GEN.present", &double_ak4GenJetsNoNu_sigma_GEN_present, &b_double_ak4GenJetsNoNu_sigma_GEN_present);
   fChain->SetBranchAddress("double_ak4GenJetsNoNu_sigma_GEN.obj", &double_ak4GenJetsNoNu_sigma_GEN_obj, &b_double_ak4GenJetsNoNu_sigma_GEN_obj);
   fChain->SetBranchAddress("double_ak8GenJets_sigma_GEN.present", &double_ak8GenJets_sigma_GEN_present, &b_double_ak8GenJets_sigma_GEN_present);
   fChain->SetBranchAddress("double_ak8GenJets_sigma_GEN.obj", &double_ak8GenJets_sigma_GEN_obj, &b_double_ak8GenJets_sigma_GEN_obj);
   fChain->SetBranchAddress("double_ak8GenJetsNoNu_sigma_GEN.present", &double_ak8GenJetsNoNu_sigma_GEN_present, &b_double_ak8GenJetsNoNu_sigma_GEN_present);
   fChain->SetBranchAddress("double_ak8GenJetsNoNu_sigma_GEN.obj", &double_ak8GenJetsNoNu_sigma_GEN_obj, &b_double_ak8GenJetsNoNu_sigma_GEN_obj);
   fChain->SetBranchAddress("edmHepMCProduct_generatorSmeared__GEN.present", &edmHepMCProduct_generatorSmeared__GEN_present, &b_edmHepMCProduct_generatorSmeared__GEN_present);
   fChain->SetBranchAddress("edmHepMCProduct_generatorSmeared__GEN.obj", &edmHepMCProduct_generatorSmeared__GEN_obj, &b_edmHepMCProduct_generatorSmeared__GEN_obj);
   fChain->SetBranchAddress("edmRandomEngineStates_randomEngineStateProducer__GEN.present", &edmRandomEngineStates_randomEngineStateProducer__GEN_present, &b_edmRandomEngineStates_randomEngineStateProducer__GEN_present);
   fChain->SetBranchAddress("edmRandomEngineStates_randomEngineStateProducer__GEN.obj", &edmRandomEngineStates_randomEngineStateProducer__GEN_obj, &b_edmRandomEngineStates_randomEngineStateProducer__GEN_obj);
   fChain->SetBranchAddress("edmTriggerResults_TriggerResults__GEN.present", &edmTriggerResults_TriggerResults__GEN_present, &b_edmTriggerResults_TriggerResults__GEN_present);
   fChain->SetBranchAddress("edmTriggerResults_TriggerResults__GEN.obj", &edmTriggerResults_TriggerResults__GEN_obj, &b_edmTriggerResults_TriggerResults__GEN_obj);
   fChain->SetBranchAddress("float_genParticles_t0_GEN.present", &float_genParticles_t0_GEN_present, &b_float_genParticles_t0_GEN_present);
   fChain->SetBranchAddress("float_genParticles_t0_GEN.obj", &float_genParticles_t0_GEN_obj, &b_float_genParticles_t0_GEN_obj);
   fChain->SetBranchAddress("doubles_ak4GenJets_rhos_GEN.present", &doubles_ak4GenJets_rhos_GEN_present, &b_doubles_ak4GenJets_rhos_GEN_present);
   fChain->SetBranchAddress("doubles_ak4GenJets_rhos_GEN.obj", &doubles_ak4GenJets_rhos_GEN_obj, &b_doubles_ak4GenJets_rhos_GEN_obj);
   fChain->SetBranchAddress("doubles_ak4GenJetsNoNu_rhos_GEN.present", &doubles_ak4GenJetsNoNu_rhos_GEN_present, &b_doubles_ak4GenJetsNoNu_rhos_GEN_present);
   fChain->SetBranchAddress("doubles_ak4GenJetsNoNu_rhos_GEN.obj", &doubles_ak4GenJetsNoNu_rhos_GEN_obj, &b_doubles_ak4GenJetsNoNu_rhos_GEN_obj);
   fChain->SetBranchAddress("doubles_ak8GenJets_rhos_GEN.present", &doubles_ak8GenJets_rhos_GEN_present, &b_doubles_ak8GenJets_rhos_GEN_present);
   fChain->SetBranchAddress("doubles_ak8GenJets_rhos_GEN.obj", &doubles_ak8GenJets_rhos_GEN_obj, &b_doubles_ak8GenJets_rhos_GEN_obj);
   fChain->SetBranchAddress("doubles_ak8GenJetsNoNu_rhos_GEN.present", &doubles_ak8GenJetsNoNu_rhos_GEN_present, &b_doubles_ak8GenJetsNoNu_rhos_GEN_present);
   fChain->SetBranchAddress("doubles_ak8GenJetsNoNu_rhos_GEN.obj", &doubles_ak8GenJetsNoNu_rhos_GEN_obj, &b_doubles_ak8GenJetsNoNu_rhos_GEN_obj);
   fChain->SetBranchAddress("doubles_ak4GenJets_sigmas_GEN.present", &doubles_ak4GenJets_sigmas_GEN_present, &b_doubles_ak4GenJets_sigmas_GEN_present);
   fChain->SetBranchAddress("doubles_ak4GenJets_sigmas_GEN.obj", &doubles_ak4GenJets_sigmas_GEN_obj, &b_doubles_ak4GenJets_sigmas_GEN_obj);
   fChain->SetBranchAddress("doubles_ak4GenJetsNoNu_sigmas_GEN.present", &doubles_ak4GenJetsNoNu_sigmas_GEN_present, &b_doubles_ak4GenJetsNoNu_sigmas_GEN_present);
   fChain->SetBranchAddress("doubles_ak4GenJetsNoNu_sigmas_GEN.obj", &doubles_ak4GenJetsNoNu_sigmas_GEN_obj, &b_doubles_ak4GenJetsNoNu_sigmas_GEN_obj);
   fChain->SetBranchAddress("doubles_ak8GenJets_sigmas_GEN.present", &doubles_ak8GenJets_sigmas_GEN_present, &b_doubles_ak8GenJets_sigmas_GEN_present);
   fChain->SetBranchAddress("doubles_ak8GenJets_sigmas_GEN.obj", &doubles_ak8GenJets_sigmas_GEN_obj, &b_doubles_ak8GenJets_sigmas_GEN_obj);
   fChain->SetBranchAddress("doubles_ak8GenJetsNoNu_sigmas_GEN.present", &doubles_ak8GenJetsNoNu_sigmas_GEN_present, &b_doubles_ak8GenJetsNoNu_sigmas_GEN_present);
   fChain->SetBranchAddress("doubles_ak8GenJetsNoNu_sigmas_GEN.obj", &doubles_ak8GenJetsNoNu_sigmas_GEN_obj, &b_doubles_ak8GenJetsNoNu_sigmas_GEN_obj);
   fChain->SetBranchAddress("ints_genParticles__GEN.present", &ints_genParticles__GEN_present, &b_ints_genParticles__GEN_present);
   fChain->SetBranchAddress("ints_genParticles__GEN.obj", &ints_genParticles__GEN_obj, &b_ints_genParticles__GEN_obj);
   fChain->SetBranchAddress("recoGenJets_ak4GenJets__GEN.present", &recoGenJets_ak4GenJets__GEN_present, &b_recoGenJets_ak4GenJets__GEN_present);
   fChain->SetBranchAddress("recoGenJets_ak4GenJets__GEN.obj", &recoGenJets_ak4GenJets__GEN_obj, &b_recoGenJets_ak4GenJets__GEN_obj);
   fChain->SetBranchAddress("recoGenJets_ak4GenJetsNoNu__GEN.present", &recoGenJets_ak4GenJetsNoNu__GEN_present, &b_recoGenJets_ak4GenJetsNoNu__GEN_present);
   fChain->SetBranchAddress("recoGenJets_ak4GenJetsNoNu__GEN.obj", &recoGenJets_ak4GenJetsNoNu__GEN_obj, &b_recoGenJets_ak4GenJetsNoNu__GEN_obj);
   fChain->SetBranchAddress("recoGenJets_ak8GenJets__GEN.present", &recoGenJets_ak8GenJets__GEN_present, &b_recoGenJets_ak8GenJets__GEN_present);
   fChain->SetBranchAddress("recoGenJets_ak8GenJets__GEN.obj", &recoGenJets_ak8GenJets__GEN_obj, &b_recoGenJets_ak8GenJets__GEN_obj);
   fChain->SetBranchAddress("recoGenJets_ak8GenJetsNoNu__GEN.present", &recoGenJets_ak8GenJetsNoNu__GEN_present, &b_recoGenJets_ak8GenJetsNoNu__GEN_present);
   fChain->SetBranchAddress("recoGenJets_ak8GenJetsNoNu__GEN.obj", &recoGenJets_ak8GenJetsNoNu__GEN_obj, &b_recoGenJets_ak8GenJetsNoNu__GEN_obj);
   fChain->SetBranchAddress("recoGenMETs_genMetCalo__GEN.present", &recoGenMETs_genMetCalo__GEN_present, &b_recoGenMETs_genMetCalo__GEN_present);
   fChain->SetBranchAddress("recoGenMETs_genMetCalo__GEN.obj", &recoGenMETs_genMetCalo__GEN_obj, &b_recoGenMETs_genMetCalo__GEN_obj);
   fChain->SetBranchAddress("recoGenMETs_genMetTrue__GEN.present", &recoGenMETs_genMetTrue__GEN_present, &b_recoGenMETs_genMetTrue__GEN_present);
   fChain->SetBranchAddress("recoGenMETs_genMetTrue__GEN.obj", &recoGenMETs_genMetTrue__GEN_obj, &b_recoGenMETs_genMetTrue__GEN_obj);
   fChain->SetBranchAddress("recoGenParticles_genParticles__GEN.present", &recoGenParticles_genParticles__GEN_present, &b_recoGenParticles_genParticles__GEN_present);
   fChain->SetBranchAddress("recoGenParticles_genParticles__GEN.obj", &recoGenParticles_genParticles__GEN_obj, &b_recoGenParticles_genParticles__GEN_obj);
   Notify();
}

Bool_t Events::Notify()
{
   // The Notify() function is called when a new file is opened. This
   // can be either for a new TTree in a TChain or when when a new TTree
   // is started when using PROOF. It is normally not necessary to make changes
   // to the generated code, but the routine can be extended by the
   // user if needed. The return value is currently not used.

   return kTRUE;
}

void Events::Show(Long64_t entry)
{
// Print contents of entry.
// If entry is not specified, print current entry
   if (!fChain) return;
   fChain->Show(entry);
}
Int_t Events::Cut(Long64_t entry)
{
// This function may be called from Loop.
// returns  1 if entry is accepted.
// returns -1 otherwise.
   return 1;
}
#endif // #ifdef Events_cxx
