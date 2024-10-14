#include <stdio.h>
#include <math.h>

float a, b, c, area, perim, semiperim;

int main(){
    int lens[3];

    for(int i = 0; i < 3; i++){
        printf("Input side length of triangle #%d:", i + 1);
        scanf("%d", &lens[i]);
    }

    a = lens[0];
    b = lens[1];
    c = lens[2];
    semiperim = (a + b + c) / 2.0;
    area = sqrt(semiperim * (semiperim - a) * (semiperim - b) * (semiperim - c));
    perim = a + b + c;

    
    printf("Area of triangle = %0.2f \nPermimeter of triangle = %0.2f", area, perim);
    
    return 0;
}
