#include <stdio.h>

int main()
{
    for(int i = 0; i < 20; i++)
    {
        if(i%5 == 0)
        {
            printf("\n");
        }
        if(i%2 == 0)
        {
            printf("*");
        }else{
            printf("#");
        }
    }
    return 0;
}
