#include <stdio.h>
 
void StrongNumber(){
    long num = 145;
    long copy = num;
    long total = 0;
    int factorials[10] = {0};
    

    for(int i = 1; num != 0; i++){
        int digit = num % 10;
        factorials[i-1] = 1;

        for(int j = 1; j <= digit; j++){
            factorials[i-1] *= j;
        }
        num = num / 10;
    }

    int len = sizeof(factorials)/sizeof(factorials[0]);

    for(int i = 0; i < len; i++){
        total += factorials[i];
    }

    printf("Total: %ld", total);
  
    if (total == copy){
        printf("\nStrong Number");
    }
}
int main(){

    StrongNumber();

  return 0;
}
