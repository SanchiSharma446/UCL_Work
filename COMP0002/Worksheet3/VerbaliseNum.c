#include <stdio.h>

void NumToText(int num)
{
    int i = 0;
    char string[] = "";
    char nums[][6] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    char tens[][8] = {"ten", "twenty", "thirty", "fourty", "fifty", "sixty", "seventy", "eighty", "ninty"};

    while(i == 0){
        if (num < 0 || num > 999){
            printf("\nInput a number between 0-999: ");
            scanf("%d", &num);
        }
        else{
            break;
        }
    }
    if(num % 100 == 0){
        printf("%s hundered", nums[num/100]);
    }
    else if(num > 101){
        printf("%s hundered and ", nums[num/100]);
    }

    if(num % 100 == 11){
        printf("eleven");
    }
    else if(num % 100 == 12){
        printf("twelve");
    }
    else if(num % 10 == 0){
        printf("%s", tens[(num%100)/10 - 1]);
    }
    else if(num % 100 > 12 && num % 100 < 20){
        printf("%steen ", nums[num%10]);
    }
    else if(num % 100 > 20){
        printf("%s ", tens[(num%100)/10 - 1]);   
    }


    if(num % 10 != 0 && num % 100 > 19){
        printf("%s ", nums[num%10]);
    }
        
}

int main(){
    
    NumToText(999);
    
    return 0;
}
