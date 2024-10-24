#include <stdio.h>

void dateCheck(){
    int d,m,y;
    int x = 0;

    while(1==1){
        printf("Enter the date in the format dd/mm/yyyy: ");
        x = scanf("%d/%d/%d", &d, &m, &y);
        while(x == 0){
            printf("\nInvalid input. Please enter the date in the format dd/mm/yyyy: ");
            x = scanf("%d/%d/%d", &d, &m, &y);
        }
        
        if(m == 2){
            if(d > 28 || d < 1){
                printf("\nInvalid date. February has only 28 days.\n");
        }
        }else if(m == 4 || m == 6 || m == 9 || m == 11){
            if(d > 30 || d < 1){
                printf("\nInvalid date. The month %d has only 30 days.\n", m);
            }
        }
        else if(m > 12 || m < 1){
            printf("\nInvalid month. Please enter a month between 1 and 12.\n");
        }
        else{
            printf("\nValid date.\n");
            if(y % 4 == 0){
                printf("It is a leap year.\n");
            }
            else{
                printf("It is not a leap year.\n");
            }
            int weekday  = (d += m < 3 ? y-- : y - 2, 23*m/9 + d + 4 + y/4- y/100 + y/400)%7;
            char *days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
            printf("The day is %s\n", days[weekday]);
            break;
        }
    }
}

int main(){

    dateCheck();

  return 0;
}
