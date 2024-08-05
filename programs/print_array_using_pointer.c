#include <stdio.h>

void printArray(int *location, int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("[%p] =  %d\n", location,*location);
        location++;
    }
}

void main()
{

    int arr[] = {12, 34, 567, 5, 45, 68, 9};

    printArray(&arr[0], 7);

    // dynamic memory allocation
    // malloc()
    // calloc()
    // realloc()
    // free()
    
}