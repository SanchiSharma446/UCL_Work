#include <stdio.h>

int main(){

  int count = 3;
  printf("*\n");

  for(int i = 0; i < 9; i++){
      printf("*");
    
      if(i < 5){
        
          for(int j = 0; j < i; j++){
              printf(" ");
          }
          printf("*");
        
      }else if(i >= 4){
        
          for(int j = 0; j < count; j++){
            printf(" ");  
          }
        
          count--;
          printf("*");
      }
      printf("\n");
  }
  printf("*");
  return 0;
}
