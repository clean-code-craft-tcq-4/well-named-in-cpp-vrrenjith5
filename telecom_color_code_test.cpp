#include <assert.h>
#include "telecom_color_code_test.h"

void ColorPairTest :: numberToPair(int pairNumber,
  MajorColor expectedMajor,
  MinorColor expectedMinor)
{
  ColorPair colorPair =
      getColorFromPairNumber(pairNumber);
  std::cout << "Got pair " << colorPair.toString() << std::endl;
  assert(colorPair.getMajorColor() == expectedMajor);
  assert(colorPair.getMinorColor() == expectedMinor);
}

void ColorPairTest :: pairToNumber(
  MajorColor major,
  MinorColor minor,
  int expectedPairNumber)
{
  int pairNumber = getPairNumberFromColor(major, minor);
  std::cout << "Got pair number " << pairNumber << std::endl;
  assert(pairNumber == expectedPairNumber);
}
