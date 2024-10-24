#include <stdio.h>

 
void Line1(){
    printf("******");
}

void Left2(){
    printf("*     ");
}

void Right3(){
    printf("     *");
}

void Both4(){
    printf("*    *");
}

void Mid5(){
    printf("  *  ");
}

void printNums(int num){

    int digits[10] = {};

    int drawcoms[10][5] = {
        {1, 4, 4, 4, 1}, // 0
        {5, 5, 5, 5, 5}, // 1
        {1, 3, 1, 2, 1}, // 2
        {1, 3, 1, 3, 1}, // 3
        {4, 4, 1, 3, 3}, // 4
        {1, 2, 1, 3, 1}, // 5
        {1, 2, 1, 4, 1}, // 6
        {1, 3, 3, 3, 3}, // 7
        {1, 4, 1, 4, 1}, // 8
        {1, 4, 1, 3, 1}  // 9
    }; 

    int n = num;
    int count = 0;
    while (n > 0) {
        digits[count++] = n % 10;
        n /= 10;
    }

    for(int row = 0; row < 5; row++){
        for(int i = count - 1; i >= 0; i--){
            switch(drawcoms[digits[i]][row]){
                case 1:
                    Line1();
                    printf(" ");
                    break;
                case 2:
                    Left2();
                    printf(" ");
                    break;
                case 3:
                    Right3();
                    printf(" ");
                    break;
                case 4:
                    Both4();
                    printf(" ");
                    break;
                case 5:
                    Mid5();
                    printf(" ");
                    break;
            }
        }
        printf("\n");
    }
}



int main(){

    printNums(1234567890);

  return 0;
}
