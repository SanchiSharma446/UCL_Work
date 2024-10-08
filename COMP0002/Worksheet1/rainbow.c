#include "stdio.h"
#include "graphics.h"

int main(void)
{
  setWindowSize(1000,1000);
  setColour(red);
  drawArc(100,100,400,300,0,180);
  setColour(green);
  drawArc(150,140,300,225,0,180);
  setColour(blue);
  drawArc(200,175,200,150,0,180);
}
