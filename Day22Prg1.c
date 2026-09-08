//Write a program to check whether the number is a strong number or not.
#include <stdio.h>

int main()
{
    int n, original, digit, factorial, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    original = n;

    while (n > 0)
    {
        digit = n % 10;

        factorial = 1;

        for (int i = 1; i <= digit; i++)
        {
            factorial = factorial * i;
        }

        sum = sum + factorial;

        n = n / 10;
    }

    if (sum == original)
        printf("%d is a Strong Number.", original);
    else
        printf("%d is not a Strong Number.", original);

    return 0;
}
