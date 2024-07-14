#include <stdio.h>

int main()
{

    // operators // symbols
    // arithmetic operator
    // + - * / %

    int a = 497;
    int b = 10;

    printf("Add is : %d  ", a + b); // using arithmetic operator using 2 variables
    printf("Sub is : %d  ", a - b); // using arithmetic operator using 2 variables
    printf("Mul is : %d  ", a * b); // using arithmetic operator using 2 variables
    printf("Div is : %d  ", a / b); // using arithmetic operator using 2 variables
    printf("Mod is : %d  ", a % b); // using arithmetic operator using 2 variables

    // % is reminder

    // 497 % 10 = 7
    // 497 / 10 = 49

    // assignment operator
    // = +=  -=  *=  /=  %=

    int p = 12;

    // p = p + 10;
    p %= 10;

    printf("%d", p);

    // conditional operator
    // < > <= => == !=

    int x = 10;
    int y = 20;

    printf("  %d  ", x > y);

    // == !=  // euqality operator

    int x1 = 10;
    int y1 = 11;

    printf("   %d   ", x1 != y1);

    // logical operator
    // && ||
    // between 2 conditional operator

    int x2 = 21;
    int y2 = 20;

    printf("   %d   ", x2 < y2 || x2==y2 );

    return 0;
}