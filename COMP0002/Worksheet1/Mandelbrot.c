#include <stdio.h>
#include <complex.h>
#include <math.h>
#include "graphics.h"

int main() {
    setWindowSize(1000, 1000);

    for (double x = -2.0; x < 1.0; x += 0.001) 
    {
        for (double y = -1.5; y < 1.5; y += 0.001)
        {
            double complex C = x + y * I;  
            double complex Z = 0.0 + 0.0 * I;  
            int count = 1;
            int iter = 1000; 

            while (sqrt(creal(Z) * creal(Z) + cimag(Z) * cimag(Z)) <= 2.0 && count < iter) {
                Z = Z * Z + C;  
                count++;
            }

            if (count < iter) {
                if (count < 3) {
                    setColour(gray);
                } else if (count < 4) {
                    setColour(pink);
                } else if (count < 5) {
                    setColour(magenta);
                } else if (count < 7) {
                    setColour(blue);
                } else if (count < 9) {
                    setColour(cyan);
                } else if (count < 15) {
                    setColour(green);
                } else if (count < 30) {
                    setColour(red);
                } else if (count < 90) {
                    setColour(magenta);
                } else if (count < 100) {
                    setColour(blue);
                } else if (count < 500) {
                    setColour(cyan);
                }

                drawLine(200 * x + 500, 200 * y + 300, 200 * x + 500, 200 * y + 300);
            }
        }
    }
    return 0;
}
