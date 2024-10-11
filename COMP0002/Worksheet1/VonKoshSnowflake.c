#include "graphics.h"
#include <stdio.h>
#include <math.h>


void fractal(float sx, float sy, float ex, float ey, int size)
{
  if (size == 0) {
    drawLine(sx, sy, ex, ey);
    return;
  }

  // Calculating x1 and x2
  float x1 = (2.0 * sx + ex) / 3.0;
  float y1 = (2.0 * sy + ey) / 3.0;

  float x2 = (sx + 2.0 * ex) / 3.0;
  float y2 = (sy + 2.0 * ey) / 3.0;

  // Calculating triangle vertex
  float x3 = (x1 + x2) / 2.0 - (sqrt(3.0) / 2.0) * (y2 - y1);
  float y3 = (y1 + y2) / 2.0 + (sqrt(3.0) / 2.0) * (x2 - x1);

  // Calling function for each of the four sections
  fractal(sx, sy, x1, y1, size - 1);  // A to B
  fractal(x1, y1, x3, y3, size - 1);  // B to Tip
  fractal(x3, y3, x2, y2, size - 1);  // Tip to C
  fractal(x2, y2, ex, ey, size - 1);  // C to D
}

int main(void)
{
  setWindowSize(1000,1000);
  
  //making triangle
  float x1 = 300;
  float y1 = 100;
  float len = 300;

  double PI = 3.1415926535;

  float x2 = x1 + len * cos(PI/3);
  float y2 = y1 + len * sin(PI/3);

  float x3 = x1 + len;
  float y3 = y1;

  // Call recursion 3 times for each side
  fractal(x1, y1, x2, y2, 3);
  fractal(x3, y3, x1, y1, 3);
  fractal(x2, y2, x3, y3, 3);
  
  return 0;
}
