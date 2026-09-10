//Find the digit that occurs the most times in an integer number.
#include <stdio.h>
int main()
{
    int num, digit, max_digit = 0, max_count = 0;
    int count[10] = {0}; // Array to store the count of each digit
    printf("Enter an integer: ");
    scanf("%d", &num);
    while (num != 0)
    {
        digit = num % 10;
        count[digit]++;
        if (count[digit] > max_count)
        {
            max_count = count[digit];
            max_digit = digit;
        }
        num /= 10;
    }
    printf("The digit that occurs the most times is %d with %d occurrences.\n", max_digit, max_count);
    return 0;
}