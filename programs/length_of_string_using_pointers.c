#include <stdio.h>

int main()
{

    printf("Please Enter the String : ");
    char name[50];
    gets(name);

    char *ptr = &name[0];

    int count = 0;

    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        count++;
        ptr++;
    }

    printf("\n");

    printf("Length of a string is %d \n", count);

    return 0;
}