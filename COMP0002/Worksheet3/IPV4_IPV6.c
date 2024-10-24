#include <stdio.h>


void IPV4(){
    int a,b,c,d,x;
    while(1 == 1){
        printf("Enter the IP address: ");
        x = scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        while(x == 0){
            printf("\nInvalid IP address\n");
            printf("Enter the IP address: ");
            x = scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        }

        if(a>=0 && a<=255 && b>=0 && b<=255 && c>=0 && c<=255 && d>=0 && d<=255){
            printf("\nValid IP address\n");
            break;
        }else{
            printf("\nInvalid IP address\n");
        }
    }
}

void IPV6(){
    unsigned int a,b,c,d,e,f,g,h;
    int x;
    int count = 0;

    while(1 == 1){
        printf("Enter the IP address: ");
        x = scanf("%x:%x:%x:%x:%x:%x:%x:%x",&a,&b,&c,&d,&e,&f,&g,&h);
        while(x == 0){
            printf("\nInvalid IP address\n");
            printf("Enter the IP address: ");
            x = scanf("%x:%x:%x:%x:%x:%x:%x:%x",&a,&b,&c,&d,&e,&f,&g,&h);
        }
        unsigned int nums[8] = {a,b,c,d,e,f,g,h};
        for(int i = 0; i < 8; i++){
            if(nums[i] > 65535){
                printf("\nInvalid IP address\n");
                break;
            }
            if(nums[i] == 0){
                count += 1;
                if(count > 1){
                    printf("\nInvalid IP address\n");
                    break;
                }
            }
            if(i == 7){
                printf("\nValid IP address\n");
                return;
            }
        }
    }
}

int main(){

   IPV4();
   IPV6();

  return 0;
}
