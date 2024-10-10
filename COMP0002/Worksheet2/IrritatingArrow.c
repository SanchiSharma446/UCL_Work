#include <stdio.h>

int main()
{

  int count = 5;

  for(int i = 0; i < 11; i++)
  {
    if(i <= 4){
        for(int j = 0; j < i; j++)
        {
        printf(" ");
        }
    }else{
        for(int j = count; j > 0; j--)
        {
        printf(" ");
        }
        
        count--;
    }
    
    for(int c = 0; c < 5; c++)
    {
        printf("*");
    }

    printf("\n");
  }
}
