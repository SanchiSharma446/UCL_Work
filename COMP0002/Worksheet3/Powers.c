#include <stdio.h>

int power(int x, int y){
    int result = 1;
    for(int i = 0; i < y; i++){
        result *= x;
    }
    printf("%d\n", result);
    return result;
}


int main(){

    power(3, 5);
    
    return 0;
}
