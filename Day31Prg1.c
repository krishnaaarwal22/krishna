//Search for an element in an array using linear search.
#include <stdio.h>
int main()
{                                   
    int arr[100], i, n, key, found = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search for: ");
    scanf("%d", &key);
    for (i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            found = 1;
            break;
        }
    }
    if (found)
    {
        printf("%d is present in the array.\n", key);
    }
    else
    {
        printf("%d is not present in the array.\n", key);
    }
    return 0;
}