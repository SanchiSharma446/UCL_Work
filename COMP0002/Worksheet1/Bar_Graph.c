#include "graphics.h"

int main(void)
{
  int x[] = {50, 100, 150, 200, 250};
  int y[] = {100, 90, 80, 70, 60};
  int height[] = {70, 80, 90, 100, 110};
  for(int i = 0; i < 5; i++)
  {
    switch(i)
    {
      case 0: setColour(black); break;
      case 1: setColour(blue); break;
      case 2: setColour(cyan); break;
      case 3: setColour(darkgray); break;
      case 4: setColour(gray); break;
    }
    fillRect(x[i], y[i], 50, height[i]);
  }
  drawLine(50, 170, 280, 170);
  drawLine(50, 50, 50, 160);
  drawString("A", 50, 190);
  drawString("B", 100, 190);
  drawString("C", 150, 190);
  drawString("D", 200, 190);
  drawString("E", 250, 190);
  drawString("1", 30, 150);
  drawString("2", 30, 80);
  return 0;
}
