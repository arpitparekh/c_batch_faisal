#include <stdio.h>

int main()
{

    FILE *ptr;

    // ptr = fopen("/home/arpit-parekh/files/from_c.txt", "w");
    // ptr = fopen("/home/arpit-parekh/files/from_c.txt", "a");
    ptr = fopen("/home/arpit-parekh/files/bhavin.c.txt", "w");

    if (ptr == NULL)
    {
        printf("File Does not Exists");
    }
    else
    {
        printf("File Exists");
    }

    fprintf(ptr, " Welcome to Bascom"); // write something in file

    // char data[50];
    // // // while (fscanf(ptr, "%s", &data) == 1)
    // // // {
    // // //     printf("\n%s\n", data);
    // // // }

    // fgets(data, sizeof(data), ptr);

    // printf("\n%s\n", data);

    fclose(ptr);

    return 0;
}