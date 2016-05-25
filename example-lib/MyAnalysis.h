#ifndef __ANALYSISCPP_MYANALYSIS_H__
#define __ANALYSISCPP_MYANALYSIS_H__

#include "TObject.h"
#include "TH1F.h"

class MyAnalysis {
 public:
  MyAnalysis();
  TH1F m_h_ptc_pdgid;
 
};

#endif
