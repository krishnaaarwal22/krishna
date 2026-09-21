//Check if a string is a palindrome.
#include <stdio.h>

int main()
{
    char str[100];
    int length = 0, i;
    int palindrome = 1;

    printf("Enter a string: ");
    scanf("%99s", str);

    // Find length of string
    while (str[length] != '\0')
    {
        length++;
    }

    // Compare characters from both ends
    for (i = 0; i < length / 2; i++)
    {
        if (str[i] != str[length - 1 - i])
        {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}