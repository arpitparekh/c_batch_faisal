// array
// array is group of similar type of elements
// array is collection of elements
// array is collection of values

#include <stdio.h>

int main()
{

    int values[10]; // just declaration

    int arr[] = {12, 23, 6, 7, 56, 34, 4, 57, 96, 96};
               // 0  1   2  3   4   5   6   7  8    9

    // fixed size

    printf("%d\n\n", arr[9]);

    arr[4] = 45;  // re intialization is possible

    float arr1[] = {1.2, 1.233, 5.6};
    char arr2[] = {'a', 'b', 'c', 'd', 'e'};

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%f ", arr1[i]);
    }

    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%c ", arr2[i]);
    }

    printf("\n");

    return 0;
}