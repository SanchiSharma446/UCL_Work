#include "stdio.h"
#include "string.h"

// Written by Sanchi 6th Oct 2024 // This program displays my name.

//Q1.1//

int main(void)
{
  char myName[] = "Sanchi"; 
  printf("Hello, my name is %s\n", myName);

  int index = strlen(myName) - 1;

  while (index > -1)
    {
  printf("%c", myName[index]);
      index = index - 1;
    }
    printf("\n");
  return 0; 
  }

//Q1.2//

int main(void)
{
  char myName[] = "Sanchi"; 
  char depName[] = "Dept. of Computer Science";
  char address1[] = "Malet Place Engineering Building";

  printf("Hello, my name is %s\nI am in the %s located at %s\n", myName, depName, address1);

  int index = strlen(myName) - 1;

  while (index > -1)
    {
  printf("%c", myName[index]);
      index = index - 1;
    }
    printf("\n");
  return 0; 
  }
