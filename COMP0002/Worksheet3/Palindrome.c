#include <stdio.h>
#include <string.h>

void testPalin(){
    char string[] = "";
    int match = 1;
    printf("Enter a string: ");
    scanf("%s", string);
    int i = strlen(string)-1;
    int j = 0;

    while(j < strlen(string)){
        if(string[j] != string[i]){
            match = 0;
            break;
        }
        j++;
        i--;
    }

    if (match == 0){
        printf("Not a palindrome");
    }
    else{
        printf("Palindrome");
    }

}

int main(){
    
    testPalin();
    
    return 0;
}
