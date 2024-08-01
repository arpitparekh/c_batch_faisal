#include <stdio.h>

void sum(int a, int b)
{
    if (a < b)
    {
        return; // use of just return
    }
    printf("%d\n", a + b);
}

void main()
{

    // variables
    // datatypes
    // operators
    // conditional statments
    // loops
    // jump statement // break // continue // goto
    // loops inside loop
    // array
    // array inside array (matrixs)
    // functions

    sum(1, 12);

    // pointer

    int a = 12;
    int *p = &a;

    printf("Location of %d is %p\n", a, p);

    printf("Value  is %d\n", *p);

    printf("Location pointer is %p\n", &p);

    int a = 12;

    int *p = NULL;
    int *p1;

    int a = NULL;

    // both p and p1 is null
}