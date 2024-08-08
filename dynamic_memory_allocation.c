#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr = (int *)malloc(10 * sizeof(int)); // Allocate memory for 10 integers

    if (ptr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    int *ptr3 = (int *)calloc(10, sizeof(int)); // Allocate and zero-initialize memory for 10 integers

    if (ptr3 == NULL)
    {
        printf("Memory allocation failed!\n");
        free(ptr); // Free previously allocated memory before returning
        return 1;
    }

    printf("Memory allocated for 10 integers\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d = %p => %d\n", i + 1, (ptr + i), *(ptr + i)); // Print pointer and value
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d = %p => %d\n", i + 1, (ptr3 + i), *(ptr3 + i)); // Print pointer and value
    }

    // Free the allocated memory
    free(ptr);
    free(ptr3);

    return 0;
}
