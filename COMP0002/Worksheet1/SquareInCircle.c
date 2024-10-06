#include "stdio.h"
#include "graphics.h"
#include "math.h"

int main(void)

{
  double DEG, ADD;
  double PI;
  int r;

  PI = 3.14159265359;
  DEG = PI/2;
  ADD = PI/4;
  r = 50;

  drawOval(100, 100, 100, 100);
  drawLine(150 + r*cos(ADD + DEG), 150 + r*sin(ADD + DEG),150 + r*cos(ADD + 2*DEG), 150 + r*sin(ADD + 2*DEG));
  drawLine(150 + r*cos(ADD + 3*DEG), 150 + r*sin(ADD + 3*DEG),150 + r*cos(ADD + 2*DEG), 150 + r*sin(ADD + 2*DEG));
  drawLine(150 + r*cos(ADD + 3*DEG), 150 + r*sin(ADD + 3*DEG),150 + r*cos(ADD + 4*DEG), 150 + r*sin(ADD + 4*DEG));
  drawLine(150 + r*cos(ADD + 4*DEG), 150 + r*sin(ADD + 4*DEG),150 + r*cos(ADD + DEG), 150 + r*sin(ADD + DEG));
  }
