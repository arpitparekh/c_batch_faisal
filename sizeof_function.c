#include <stdio.h>

void main()
{

    long double a = 14545454454545452.3434;

    printf("%ld", sizeof(a)); // gives size in bytes

    int arr[] = {34, 46, 4, 34, 6, 8, 8};

    printf("\nSize of an array %ld \n", sizeof(arr));

    // printf("size of float is %ld", sizeof(double));

    int length = sizeof(arr) / sizeof(int);

    printf("Length of Array is %d\n", length);

    printf(" %d ", printf("%Lf", a));
}