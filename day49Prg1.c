//Print the initials of a name.
#include <stdio.h>

int main()
{
    char name[100];
    int i;

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // First character is always an initial
    if (name[0] != '\0' && name[0] != '\n')
    {
        printf("%c ", name[0]);
    }

    // Find characters after spaces
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ' ' &&
            name[i + 1] != ' ' &&
            name[i + 1] != '\0' &&
            name[i + 1] != '\n')
        {
            printf("%c ", name[i + 1]);
        }
    }

    return 0;
}