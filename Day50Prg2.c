//Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str);
    printf("All sub-strings of the string are:\n");
    for (int i = 0; i < len; i++) {
        for (int j = 1; j <= len - i; j++) {
            for (int k = i; k < i + j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }

    return 0;
}