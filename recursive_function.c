#include <stdio.h>

// void display()
// {
//     printf("Hello, World!\n");

//     display();
// }

int facto(int a)
{

    if (a == 1)
    {
        return 1;
    }
    else
    {
        return a * facto(a - 1);
    }
}

int main()
{

    // recursive function
    // function that calls itself

    display();

    // find a factorial of program using recursive function
    printf("factorail is %d", facto(5));

    return 0;
}