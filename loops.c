// loops are used for repetative task
// 1..100

// initial value
// condition
// increment // decrement

// while loop
// do while loop
// for loop

#include <stdio.h>

int main()
{

    // print first 10  natural numbers

    int i = 1;

    while (i < 10)
    {
        // printf("Hello World\n");
        printf("%d\n", i);
        i++; // 1  // 2
    }

    printf("\n");

    // print first 10 natural number in reverse

    int j = 10;

    while (j > 0)
    {
        printf("%d\n", j);
        j--;
    }

    printf("\n");

    // print first 100 natural odd numbers

    int k = 1;

    while (k <= 100)
    {
        if (k % 2 != 0)
        {
            printf("%d\n", k);
        }
        k++;
    }

    printf("\n");

    // do..while

    // inititalition
    // increment // decrement
    // condition

    int b = 1;

    do{
        b++;
        printf("%d\n", b);
        
    } while (b <= 10);

    printf("\n");

    // for loop
    // intialization // condition // increment in one line

    for (int a = 1; a <= 10;a++){
        printf("%d\n", a);
    }

    // sum of 50 natural numbers

    int sum = 0; // 3

    for (int a = 1; a <= 50;a++){ //
        sum =  sum + a;  // 6
        // printf("sum is %d \n", sum);
    }

    printf("sum is %d \n", sum);

    return 0;
}