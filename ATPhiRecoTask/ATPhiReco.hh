#ifndef ATPHIRECO_H
#define ATPHIRECO_H

class ATRawEvent;
class ATPad;
class ATEvent;
class ATProtoEvent;
class ATHit;
class ATProtoQuadrant;

// FairRoot classes
#include "FairRootManager.h"
#include "FairLogger.h"

// STL
#include <vector>
#include <algorithm>

// ROOT classes
#include "TClonesArray.h"

class ATPhiReco
{

   public:
    ATPhiReco();
    virtual ~ATPhiReco();
    virtual void PhiAnalyze(ATEvent *event,ATProtoEvent *protoevent) = 0;
    //virtual void PhiAnalyze(ATEvent *event, ATHoughSpace *HSpace) = 0; //TODO: Overload pure virtual functions????

    //TODO Ideas : Maximum separation in time buckets between two pulses - Sort the Hit Array vector

   protected:
     std::vector<ATProtoQuadrant> fQuadArray; //Limited to 4
     //Double_t PhiCalc(ATProtoQuadrant *quadrant); // Calculates Phi Angle of two neighboring strips

};

#endif
