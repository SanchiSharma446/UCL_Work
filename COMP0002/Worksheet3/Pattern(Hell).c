#include <stdio.h>
#include "graphics.h"

void Square(int draw, long x, long y){

    if(draw == 0){
        setColour(blue);
    }
    else{
        setColour(yellow);
    }

    fillRect(x, y, 20, 20);
}


int colourSwap(int colour){
    if(colour == 0){
        colour = 1;
    }else{
        colour = 0;
    }
    return colour;
}

void patternTwo(){
    setWindowSize(1000,1000);
    int pattern[] = {3,1,1};
    int colour = 0;
    int x = 0;
    int y = 0;
    int row = 0;

    for(int squares = 1; squares < 110; squares ++){
        for(int count = 0; count < 3; count++){
            for(int i = 0; i < pattern[count]; i++){
                Square(colour,x,y);
                x += 20;
                row ++;
                if(row%23 == 0){
                    y += 20;
                    x = 0;
                }
            }
            colour = colourSwap(colour);
        }

    }

}

int main(){

    patternTwo();
    setColour(white);
    fillRect(0, 460, 1000, 1000);

  return 0;
}
