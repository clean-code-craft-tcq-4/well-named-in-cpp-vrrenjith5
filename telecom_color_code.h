#ifndef __TELECOM_COLOR_CODE_H_
#define __TELECOM_COLOR_CODE_H_

#include <iostream>
#include "enums.h"

class ColorPair {
  private:
    MajorColor majorColor;
    MinorColor minorColor;
  public:
    ColorPair(MajorColor major, MinorColor minor):
    majorColor(major), minorColor(minor){}
    MajorColor getMajorColor();
    MinorColor getMinorColor();
    std::string toString();
};

ColorPair getColorFromPairNumber(int pairNumber);
int getPairNumberFromColor(MajorColor major, MinorColor minor);

#endif /*__TELECOM_COLOR_CODE_H_*/
