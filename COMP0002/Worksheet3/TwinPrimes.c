#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <math.h>


long checkPrime(long num){
    long limit = 0;

    limit = sqrt(num) + 1;

    for(int i = 2; i < limit; i++){
        if(num % i == 0){
            return 0;
        }
    }

    return num;
}


void TwinPrimes(){
    long start,end;
    int count = 0;
    int new = 1;

    printf("Enter starting number for range: ");
    scanf("%ld", &start);
    printf("Enter ending number for range: ");
    scanf("%ld", &end);

    long primes[end - start];

    for(long i = start; i <= end; i++){
        if(checkPrime(i) != 0){
            primes[count] = i;
            count++;
            new = 1;
        }
        if(count > 0 && primes[count - 1] - primes[count - 2] == 2 && new == 1){
            printf("Twin primes: %ld and %ld\n", primes[count - 2], primes[count - 1]);
            new = 0;
        }

    }
}
 

int main(){

    TwinPrimes();

  return 0;
}
