#include <stdio.h>

void print1()
{
    for(int i = 0; i < 5; i++)
        {
            printf("*");
        }
    printf("\n");
}

void print2()
{
    for(int i = 0; i < 5; i++)
        {
            if(i == 0 || i == 4)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }     
        }
    printf("\n");
}

int main()
{
    print1();
    for(int i = 0; i < 3; i++)
    {
        print2();
    }
    print1();

}
