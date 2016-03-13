/*
  Stepper Library - Library for Moving Stepper According To Angle
  Created by Samir M Eltabbal, March 13, 2016.
  For Personal Use Only , Cannot Be Used Without Permission 
*/
#ifndef stepper2_h
#define stepper2_h

#include "Arduino.h"

class stepper2
{
  public:
    stepper2(int ENA,int DIR,int CLK);
    void fullSpeed(int steps);
    void halfSpeed(int steps);
    void quarSpeed(int steps);
  private:
    int _ena;
    int _dir;
    int _clk;
};

#endif