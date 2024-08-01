#include <stdio.h>
#include <string.h>

void main()
{

    printf("Enter String : ");
    char data[50];
    char data2[50];
    gets(data);
    gets(data2);
    int len = strlen(data);
    int len2 = strlen(data2);
    printf("%d %d\n", len, len2);

    printf("%d\n", strcmp(data, data2));

    char data3[50];
    strcpy(data3, data2);
    puts(data3);

    strcat(data3, " faisal"); // concatination
    puts(data3);

    // This program calculates the length of a string without using the standard 
    // library function strlen.

    char str[] = "Badla Lunga";

    char ch = str[0];

    int count = 0;

    while (ch != '\0')
    {

        ch = str[count];
        count++;
    }

    printf("Size of a string is %d\n", count - 1);
}