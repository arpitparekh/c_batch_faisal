#include <stdio.h>

int main()
{

    char name1[50] = "Hello Faisal";
    char name2[50];

    char *ptr1 = &name1[0];
    char *ptr2 = &name2[0];

    while (*ptr1 != '\0')
    {
        *ptr2 = *ptr1;
        ptr1++;
        ptr2++;
    }

        printf("Name1 is %s and Name2 is %s\n", name1, name2);
    return 0;
}