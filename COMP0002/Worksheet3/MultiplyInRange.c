#include <stdio.h>

void multiply(){
    int a;
    int b;
    int total = 1;

    printf("Enter the first number in the range: ");
    scanf("%d", &a);
    printf("Enter the second number in the range: ");
    scanf("%d", &b);

    for(int i = a; i <= b; i++){
        total *= i;
    }
    printf("The product of the numbers in the range is: %d\n", total);
}


int main() {
    multiply();
    return 0;
}
