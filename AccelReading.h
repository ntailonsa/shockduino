#ifndef AccelReading_h
#define AccelReading_h

#include "Arduino.h"

class AccelReading
{
  public:
    AccelReading(int16_t x, int16_t y, int16_t z, uint8_t scalingFactor = 1);
    int x;
    int y;
    int z;
};

#endif
