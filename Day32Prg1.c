//Merge twok arrays.
#include <stdio.h>

void mergeArrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i;
    for (i = 0; i < n1; i++)
        merged[i] = arr1[i];
    for (i = 0; i < n2; i++)
        merged[n1 + i] = arr2[i];
}

int main() {
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {5, 6, 7};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[n1 + n2];

    mergeArrays(arr1, n1, arr2, n2, merged);

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++)
        printf("%d ", merged[i]);
    printf("\n");

    return 0;
}