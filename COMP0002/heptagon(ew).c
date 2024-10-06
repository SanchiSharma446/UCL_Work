#include "stdio.h"
#include "graphics.h"
#include "math.h"

// Written by Sanchi 6th Oct 2024 // This program displays my name.

int main(void)
{
  double DEG;
  double PI;
  int r;

  PI = 3.14159265359;
  DEG = (2*PI)/7;
  r = 50;

  drawLine(100 + r*cos(0), 100 + r*sin(0), 100 + r*cos(DEG), 100 + r*sin(DEG));
  drawLine(100 + r*cos(DEG*2), 100 + r*sin(DEG*2), 100 + r*cos(DEG), 100 + r*sin(DEG));
  drawLine(100 + r*cos(DEG*2), 100 + r*sin(DEG*2), 100 + r*cos(DEG*3), 100 + r*sin(DEG*3));
  drawLine(100 + r*cos(DEG*4), 100 + r*sin(DEG*4), 100 + r*cos(DEG*3), 100 + r*sin(DEG*3));
  drawLine(100 + r*cos(DEG*4), 100 + r*sin(DEG*4), 100 + r*cos(DEG*5), 100 + r*sin(DEG*5));
  drawLine(100 + r*cos(DEG*6), 100 + r*sin(DEG*6), 100 + r*cos(DEG*5), 100 + r*sin(DEG*5));
  drawLine(100 + r*cos(DEG*6), 100 + r*sin(DEG*6), 100 + r*cos(0), 100 + r*sin(0));
  }
