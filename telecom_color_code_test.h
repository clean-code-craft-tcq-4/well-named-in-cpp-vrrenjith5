#ifndef __TELECOM_COLOR_CODE_TEST_H_
#define __TELECOM_COLOR_CODE_TEST_H_

#include "telecom_color_code.h"

class ColorPairTest{

public:
  void testNumberToPair(int pairNumber,
  MajorColor expectedMajor,
  MinorColor expectedMinor);

  void testPairToNumber(
  MajorColor major,
  MinorColor minor,
  int expectedPairNumber);

};

#endif /*__TELECOM_COLOR_CODE_TEST_H_*/
