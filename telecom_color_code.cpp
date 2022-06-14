#include "telecom_color_code.h"

const char* MajorColorNames[] = {
  "White", "Red", "Black", "Yellow", "Violet"
};

int numberOfMajorColors =
  sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);

const char* MinorColorNames[] = {
  "Blue", "Orange", "Green", "Brown", "Slate"
};

int numberOfMinorColors =
  sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);

MajorColor ColorPair :: getMajorColor() {
  return majorColor;
}

MinorColor ColorPair :: getMinorColor() {
  return minorColor;
}

std::string ColorPair :: toString() {
  std::string colorPairStr = MajorColorNames[majorColor];
  colorPairStr += " ";
  colorPairStr += MinorColorNames[minorColor];
  return colorPairStr;
}

ColorPair getColorFromPairNumber(int pairNumber) {
  int zeroBasedPairNumber = pairNumber - 1;
  MajorColor majorColor =
      (MajorColor)(zeroBasedPairNumber / numberOfMinorColors);
  MinorColor minorColor =
      (MinorColor)(zeroBasedPairNumber % numberOfMinorColors);
  return ColorPair(majorColor, minorColor);
}

int getPairNumberFromColor(MajorColor major, MinorColor minor) {
  return major * numberOfMinorColors + minor + 1;
}
