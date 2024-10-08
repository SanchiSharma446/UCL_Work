#include "graphics.h"
#include <math.h>
#include <stdio.h>

int main(void)
{
  double PI = 3.14159265358979323846;
  int count = 0;
  for(float t = 0; t < 2*PI; t += 0.001)
  {
    float r = cos(4*t);
    float x = r*cos(t);
    float y = r*sin(t);

    count++;

    if(count < 785*2)
    {
      setColour(orange);
    }
    else if(count < 785*4)
    {
      setColour(red);
    }
    else if(count < 785*6)
    {
      setColour(blue);
    }
    else if(count < 785*8)
    {
      setColour(green);
    }
    else if(count < 785*10)
    {
      setColour(magenta);
    }
    drawLine(100+70*x,100+70*y,100+70*x,100+70*y);
  }

  count = 0;

  for(float t = 0; t < PI; t += 0.001)
  {
    float r = cos(5*t);
    float x = r*cos(t);
    float y = r*sin(t);

    count++;

    if(count < 1256*0.5)
    {
      setColour(orange);
    }
    else if(count < 1256*1)
    {
      setColour(red);
    }
    else if(count < 1256*1.5)
    {
      setColour(blue);
    }
    else if(count < 1256*2)
    {
      setColour(green);
    }
    else if(count < 1256*2.5)
    {
      setColour(magenta);
    }
    drawLine(250+90*x,200+90*y,250+90*x,200+90*y);
  }
}
