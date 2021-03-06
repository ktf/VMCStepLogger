// Copyright CERN and copyright holders of ALICE O2. This software is
// distributed under the terms of the GNU General Public License v3 (GPL
// Version 3), copied verbatim in the file "COPYING".
//
// See http://alice-o2.web.cern.ch/license for full licensing information.
//
// In applying this license CERN does not waive the privileges and immunities
// granted to it by virtue of its status as an Intergovernmental Organization
// or submit itself to any jurisdiction.


#ifdef __CLING__
#pragma link off all globals;
#pragma link off all classes;
#pragma link off all functions;

#pragma link C++ class o2::StepInfo+;
#pragma link C++ class o2::MagCallInfo+;
#pragma link C++ class std::vector<o2::StepInfo>+;
#pragma link C++ class std::vector<o2::MagCallInfo>+;
#pragma link C++ class std::vector<o2::StepInfo*>+;
#pragma link C++ class std::vector<o2::MagCallInfo*>+;
#pragma link C++ class std::vector<TGeoVolume const *>+;
#pragma link C++ class std::vector<std::vector<TGeoVolume const *> *>+;
#pragma link C++ class o2::VolInfoContainer+;
#pragma link C++ class o2::StepLookups+;
#pragma link C++ class o2::mcstepanalysis::MCAnalysis + ;
#pragma link C++ class o2::mcstepanalysis::BasicMCAnalysis + ;
#pragma link C++ class o2::mcstepanalysis::SimpleStepAnalysis + ;
#pragma link C++ class o2::mcstepanalysis::MCAnalysisMetaInfo + ;
#pragma link C++ class o2::mcstepanalysis::MCAnalysisManager + ;
#pragma link C++ class o2::mcstepanalysis::MCAnalysisFileWrapper + ;
#pragma link C++ class o2::mcstepanalysis::ROOTIOUtilities + ;

#endif
