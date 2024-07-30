#include <stdio.h>

int main()
{

    // pointer
    // pointer points to the location
    // insted of getting a value we need to get its location

    float a = 15.0;

    float *point = &a;

    printf("Location of int is %p\n", point);
    printf("value of that location is %f\n", *point);
    printf("Location of pointer is %p\n", &point);

    int arr[] = {2, 3434, 34, 34343, 434, 3434, 34};

    int *ptr = &arr[0];

    for (int i = 0; i < 7; i++)
    {

        printf("[%p] = %d\n", ptr, *ptr);
        ptr++;
    }

    printf("%p", &*&*point);

    return 0;
}