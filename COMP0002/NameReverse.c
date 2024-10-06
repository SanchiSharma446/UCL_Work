#include "stdio.h"
#include "string.h"

// Written by Sanchi 6th Oct 2024 // This program displays my name.

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
