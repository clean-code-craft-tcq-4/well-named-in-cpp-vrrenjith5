#include <iostream>
#include "telecom_color_code_test.h"

using namespace std;

int main() {

  ColorPairTest colorPairTest;

  colorPairTest.testNumberToPair(4, WHITE, BROWN);
  colorPairTest.testNumberToPair(5, WHITE, SLATE);
  colorPairTest.testPairToNumber(BLACK, ORANGE, 12);
  colorPairTest.testPairToNumber(VIOLET, SLATE, 25);

  return 0;
}
