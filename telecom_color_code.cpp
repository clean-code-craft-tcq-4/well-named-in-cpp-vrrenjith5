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
  return _majorColor;
}

MinorColor ColorPair :: getMinorColor() {
  return _minorColor;
}

std::string ColorPair :: toString() {
  std::string colorPairStr = MajorColorNames[_majorColor];
  colorPairStr += " ";
  colorPairStr += MinorColorNames[_minorColor];
  return colorPairStr;
}

void ColorPair :: printColorCodeManual() {
    std::string colorPairString = "";
    int counter = 0;
    for(int i =0; i < numberOfMajorColors; i++) {
      for(int j= 0; j < numberOfMinorColors;j++) {
        counter++;
        colorPairString = MajorColorNames[i];
        colorPairString += "/";
        colorPairString += MinorColorNames[j];
        std::cout << "Major/Minor Color, Number is: "
                  << colorPairString << ", " <<counter<< std::endl;
      }
    }
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
