#include <stdio.h>

int main()
{

    printf("Please Enter the size of an Array : ");
    int n; // 10
    scanf("%d", &n);

    int arr[n];

    printf("Please Enter Values : \n");

    for (int i = 0; i < n; i++)
    { // 0 ..9
        scanf("%d", &arr[i]);
    }

    printf("Original Array\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\nReversed Array\n");

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    int arr2[n];

    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr[i];
    }

    printf("\nDuplicate Array\n");

    for (int i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}