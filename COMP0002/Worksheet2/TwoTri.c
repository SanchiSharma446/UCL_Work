#include <stdio.h>

int main(){

    int count = 5;

    for(int i = 0; i < 7; i++){
        printf("*");
    }

    printf("\n");

    for(int i = 0; i < 6; i++){
        if(i == 0){
            printf("#*%*s", count, "*");

        }else if(i == 5){
            count = 6;
            printf("#%*s", count, "#*"); 

        }else{
            count--;
            printf("#%*s", i-1, "");
            printf("#*%*s", count, "*");
        }
        printf("\n");
    }

    for(int i = 0; i < 7; i++){
        printf("#");
    }

  return 0;
}
