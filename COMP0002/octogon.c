#include "graphics.h"
#include "math.h"

//Q1.3//

  int main(void)
  {
    setWindowSize(200,200);
    drawLine(100,100,120,100);
    drawLine(120,100,120+10*sqrt(2),100+10*sqrt(2));
    drawLine(120+10*sqrt(2),100+10*sqrt(2),120+10*sqrt(2),100+20*sqrt(2));
    drawLine(120,100+30*sqrt(2),120+10*sqrt(2),100+20*sqrt(2));
    drawLine(100,100+30*sqrt(2),120,100+30*sqrt(2));
    drawLine(100-10*sqrt(2),100+20*sqrt(2),100,100+30*sqrt(2));
    drawLine(100-10*sqrt(2),100+20*sqrt(2),100-10*sqrt(2),100+10*sqrt(2));
    drawLine(100,100,100-10*sqrt(2),100+10*sqrt(2));
    return 0;
}
