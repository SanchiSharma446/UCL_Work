#include <stdio.h>
#include "graphics.h"
#include <math.h>

void drawRectang(int x, int y, int w, int h){
    drawLine(x, y, x + w, y);
    drawLine(x, y, x, y + h);
    drawLine(x + w, y, x + w, y + h);
    drawLine(x + w, y + h, x, y + h);
}

void drawTri(float x, float y, float s){

    double PI = 3.1415926535;

    drawLine(x, y, x + s * cos(PI/3.0), y + s * sin(PI/3.0));
    drawLine(x, y, x + s, y);
    drawLine(x + s * cos(PI/3.0), y + s * sin(PI/3.0), x + s, y);
    
}


int main(){

    drawTri(100.0,100.0,100.0);
    dracRectang(100,100,100,100);

    return 0;
}
