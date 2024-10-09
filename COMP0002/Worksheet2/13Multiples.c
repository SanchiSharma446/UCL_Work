#include <stdio.h>

//with for

int main()
{
    for(int i = 0; i <=10; i++)
    {
        printf("%d * 13 = %d\n", i, i*13);
    }
    return 0;
}


//with do

int main()
{
    int i = 0;
    do
    {
        printf("%d * 13 = %d\n", i, i*13);
        i++;
    }while(i < 11);
    return 0;
}
