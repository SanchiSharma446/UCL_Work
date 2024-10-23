#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


void checkPrime(long num){
    long limit = 0;
  
    limit = sqrt(num) + 1;

    for(int i = 2; i < limit; i++){
        if(num % i == 0){
            printf("Number is not prime. ");
            printf("\nStop or choose another number? (Y/N) \n");
            return;
        }
    }
    printf("Number is prime.");
    printf("\nStop or choose another number? (Y/N) \n");
}

void Primes(){

    char num[] = "";
    int check = 0;
    long ValNum = 0;
    int valid[] = {0,1,2,3,4,5,6,7,8,9};

    for(;;){
        printf("Please enter valid number: ");
        scanf("%s", num);

        for (int i = 0; i < strlen(num); i++){
            check = 0;
          
            if(isdigit(num[i]) != 0){
                check = 1;
            }else{
                check = 0;
                printf("\nNumber not valid. ");
                break;
            }
        } 
        if(check == 1){
            ValNum = strtol(num, NULL, 10);
            checkPrime(ValNum);
        }
        for(;;){
            char choice;
            scanf(" %c", &choice);
            if(choice == 'Y' || choice == 'y'){
                break;
            }else if(choice == 'N' || choice == 'n'){
                return;
            }else{
                printf("Invalid choice. ");
            }
        }
    }
}
 

int main(){
    Primes();
  return 0;
}
