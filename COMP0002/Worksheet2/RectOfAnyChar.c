#include <stdio.h>

void Rect(int row,int col,char sym[]){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            printf("%s", sym);
        }
        printf("\n");
    }
}

int main(){

    Rect(3,3,"*");
  
    return 0;
}
