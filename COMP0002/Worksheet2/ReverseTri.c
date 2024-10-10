#include <stdio.h>

int main()
{
    int count = 6;

    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < i; j++)
        {
            printf(" ");
        }

        for(int j = count; j > 0; j--)
        {
            printf("*");
        }
        
        printf("\n");
        count--;
    }
    return 0;
}
