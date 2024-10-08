#include "graphics.h"
#include <math.h>
#include <stdio.h>

int main(void)
{
  for(float x = 0; x < 600; x += 0.01)
  {
    float y = sin(x);
    drawLine(100+20*x, 100+20*y, 100+20*x, 100+20*y);
  }
  drawLine(100,100,500,100);
  drawLine(100,50,100,150);
}
