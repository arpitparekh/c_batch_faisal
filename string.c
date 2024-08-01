#include <stdio.h>
#include <string.h>

void main()
{

    // string
    // string a array of character

    char name[] = {'b', 'a', 's', 'c', 'o', 'm', '\0'}; // null character ('\0').

    // string will always end with null character

    char ins[] = "Bascom";

    printf("Name is %s\n", name);

    printf("Enter String : ");
    char data[50];

    // scanf("%s", &data); // no not how to take string for user

    gets(data); // is a an alternstie of scanf in string

    // printf("Entered String is %s\n", data);

    puts(data);
}