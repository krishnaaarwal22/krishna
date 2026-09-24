//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>

int main()
{
    char str[100];
    int freq[26] = {0};
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of lowercase alphabets
    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            freq[str[i] - 'a']++;
        }

        i++;
    }

    // Find first repeating lowercase alphabet
    i = 0;

    while (str[i] != '\0')
    {
        if (str[i] >= 'a' && str[i] <= 'z' &&
            freq[str[i] - 'a'] > 1)
        {
            printf("First repeating lowercase alphabet = %c\n", str[i]);
            return 0;
        }

        i++;
    }

    printf("No repeating lowercase alphabet found.\n");

    return 0;
}