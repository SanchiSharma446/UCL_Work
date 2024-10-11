#include "graphics.h"
#include <math.h>

int main(){

    float x = 0;
    float y = 0;
    float r = 0;
    float t = 0;
    
    double PI = 3.1415926535;

    setWindowSize(1000,1000);

    for(float r = 0.0; r < 50; r += 0.01){
        if(t > 2 * PI){
            t = 0;
        }
        t += 0.01;

        x = r*cos(t);
        y = r*sin(t);

        drawLine(500 + x * 5, 250 + y * 5, 500 + x * 5, 250 + y * 5);
    }
  
    return 0;
}
