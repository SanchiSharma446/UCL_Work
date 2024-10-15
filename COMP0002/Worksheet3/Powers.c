#include <stdio.h>

//loop

int power(int x, int y){
    int result = 1;
    for(int i = 0; i < y; i++){
        result *= x;
    }
    printf("%d\n", result);
    return result;
}

//recursion


int powerrec(int x, int y){

    if(y == 0)
        return 1;
    else
        return x * power(x, y-1);
}



int main(){

    power(3, 5);
    
    return 0;
}
