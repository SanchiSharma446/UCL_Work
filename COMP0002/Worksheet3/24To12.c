#include <stdio.h>
 
void TimeIn12(){
    int hour, minute;
    printf("Enter the time in 24 hour format: ");
    scanf("%d:%d", &hour, &minute);
    
    while(minute > 60 || minute < 0 || hour > 24 || hour < 0){
        printf("Invalid time. Please enter the time in 24 hour format: ");
        scanf("%d:%d", &hour, &minute);
    }

    if(hour > 12){
        if(minute < 10){
            printf("The time in 12 hour format is: %d:0%d PM\n", hour-12, minute);
        }else{
            printf("The time in 12 hour format is: %d:%d PM\n", hour-12, minute);
        }
    }else if(hour == 0){
        if(minute < 10){
            printf("The time in 12 hour format is: 12:0%d AM\n", minute);
        }else{
            printf("The time in 12 hour format is: 12:%d AM\n", minute);
        }
    }
    else{
        printf("The time in 12 hour format is: %d:%d AM\n", hour, minute);
    }
}

int main(){

    TimeIn12();

  return 0;
}
