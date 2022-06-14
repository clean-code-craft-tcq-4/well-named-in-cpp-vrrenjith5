#include <assert.h>
#include "telecom_color_code_test.h"

void ColorPairTest :: testNumberToPair(int pairNumber,
    MajorColor expectedMajor,
    MinorColor expectedMinor)
{
    ColorPair colorPair =
        GetColorFromPairNumber(pairNumber);
    std::cout << "Got pair " << colorPair.ToString() << std::endl;
    assert(colorPair.getMajor() == expectedMajor);
    assert(colorPair.getMinor() == expectedMinor);
}

void ColorPairTest :: testPairToNumber(
    MajorColor major,
    MinorColor minor,
    int expectedPairNumber)
{
    int pairNumber = GetPairNumberFromColor(major, minor);
    std::cout << "Got pair number " << pairNumber << std::endl;
    assert(pairNumber == expectedPairNumber);
}
