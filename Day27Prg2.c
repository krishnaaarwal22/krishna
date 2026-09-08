//Write a program to print the following pattern:

   //*
  //***
 //*****
//*******
 //*****
  //***
   //*
#include <stdio.h>
int main()
{
    int i, j, rows = 4;
    // Upper half of the pattern
    for (i = 1; i <= rows; i++)
    {
        // Print leading spaces
        for (j = 1; j <= rows - i; j++)
        {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
return 0;
}
