//Find the sum of array elements.
#include <stdio.h>
int main()
{
    int arr[100], i, n, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    printf("Sum of array elements is: %d", sum);
    return 0;
}