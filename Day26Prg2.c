//Write a program to print the following pattern:

//*

//*
//*
//*

//*
//*
//*
//*
//*

//*
//*
//*

//*
#include <stdio.h>

int main()
{
    int i, j;

    // First group: 1 star
    for (i = 1; i <= 1; i++)
    {
        printf("*\n");
    }

    printf("\n");

    // Second group: 4 stars
    for (i = 1; i <= 4; i++)
    {
        printf("*\n");
    }

    printf("\n");

    // Third group: 5 stars
    for (i = 1; i <= 5; i++)
    {
        printf("*\n");
    }

    printf("\n");

    // Fourth group: 3 stars
    for (i = 1; i <= 3; i++)
    {
        printf("*\n");
    }

    printf("\n");

    // Last group: 1 star
    printf("*\n");

    return 0;
}
