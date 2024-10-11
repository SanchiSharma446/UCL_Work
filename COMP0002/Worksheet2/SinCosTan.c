#include <stdio.h>
#include "graphics.h"
#include <math.h>

void drawAxis(){
    setWindowSize(800,500);
    drawLine(50,250,750,250);
    drawLine(400,50,400,450);
    char toDraw[10];

    for(int i = 50; i < 751; i += 50){
        drawLine(i, 250, i, 260);

        sprintf(toDraw, "%1.1f", (i-400.0)/100.0);

        drawString(toDraw, i-10, 275);

        if(i < 451){
            drawLine(400, i, 410, i);

            sprintf(toDraw, "%1.1f", -1*((i-250.0)/100.0));

            drawString(toDraw, 415, i+5);
        }

    }
}

void drawSin(){
    setColour(blue);

    for(double i = -3.5; i < 3.5; i += 0.01){
        double x = i;
        double y = sin(x);
        x = (x*100)+400;
        y = (y*100*-1)+250;
        drawLine(x, y, x, y);
    }
}

void drawTan(){
    setColour(red);

    for(double i = -3.5; i < 3.5; i += 0.01){
        double x = i;
        double y = tan(x);
        x = (x*100)+400;
        y = (y*100*-1)+250;
        drawLine(x, y, x, y);
    }
}

void drawCos(){
    setColour(green);
    
    for(double i = -3.5; i < 3.5; i += 0.01){
        double x = i;
        double y = cos(x);
        x = (x*100)+400;
        y = (y*100*-1)+250;
        drawLine(x, y, x, y);
    }
}


int main(){

    drawAxis();
    drawSin();
    drawCos();
    drawTan();

    return 0;
}
