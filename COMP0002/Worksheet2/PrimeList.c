void Primes(){

    int primes[] = {2};
    printf("2\n");
    int count = 1;

    for(int i = 2; i < 101; i++){

            int prime = 1;

        for(int j = 0; j < count; j++)
        {
            if(i%primes[j] == 0){
                prime = 0;
            }
        }

        if(prime == 1)
            printf("%d\n", i);
            primes[count] = i;
            count++;
    }
}

int main(){

    Primes();

  return 0;
}
