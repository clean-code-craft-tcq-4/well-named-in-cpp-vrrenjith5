#include <iostream>
#include "telecom_color_code_test.h"

using namespace std;

int main() {

  ColorPairTest colorPairTest;
  ColorPair colorPair(WHITE, BLUE);

  colorPairTest.numberToPair(4, WHITE, BROWN);
  colorPairTest.numberToPair(5, WHITE, SLATE);
  colorPairTest.pairToNumber(BLACK, ORANGE, 12);
  colorPairTest.pairToNumber(VIOLET, SLATE, 25);
  colorPair.printColorCodeManual();

  return 0;
}
