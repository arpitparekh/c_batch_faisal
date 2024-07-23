#include <stdio.h>

int main()
{
    // {1,2,3,4,67,87,6,3,21,2,445,5}

    // find the smallest element from an array

    int arr[] = {1, 2, 4, 6, 64, 23, 2, 5, 6, 7, 0, 34, 4, -2, 4, 5};

    int num = -2;

    for (int i = 0; i < 16; i++)
    {
        if (num == arr[i])
        {
            printf("The number %d is present at index %d\n", num, i);
        }
    }
}