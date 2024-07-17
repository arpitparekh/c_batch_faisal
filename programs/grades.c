#include <stdio.h>

int main()
{

    /*   multiline comment

    90-100: A
    80-89: B
    70-79: C
    60-69: D
    0-59: F

    */

    printf("Enter Marks : ");
    int marks;
    scanf("%d", &marks);

    if (marks >= 90 && marks <= 100)
    {
        printf("Grade : A\n");
    }
    else if (marks >= 80 && marks < 90)
    {
        printf("Grade : B\n");
    }
    else if (marks >= 70 && marks < 80)
    {
        printf("Grade : C\n");
    }
    else if (marks >= 60 && marks < 70)
    {
        printf("Grade : D");
    }
    else
    {
        printf("Grade : F\n");
    }

    return 0;
}