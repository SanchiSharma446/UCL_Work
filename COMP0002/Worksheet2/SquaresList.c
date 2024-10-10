#include <stdio.h>

void squares(){

    int count = 1;

    for(int i = 1; i < 101; i = (count+1)*(count+1))
    {
        printf("%d\n", i);
        count++;
    }
}

int main(){

    even();

  return 0;
}
