#include <stdio.h>

int main()
{

    /*
        *****
        *****
        *****
        *****
        *****

    */

    for (int i = 1; i <= 5; i++)
    { // i == 1 , 2 , 3

        for (int j = 1; j <= 15; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    /*

     *
     **
     ***
     ****
     *****

     */

    printf("\n");

    for (int i = 1; i <= 5; i++)
    { // 1 2 3 4 5

        for (int j = 1; j <= i; j++) // j<=1 // j<=2  // j<=3 // j<=4
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\n");

    /*

     *****
     ****
     ***
     **
     *

     */

    for (int i = 1; i <= 5; i++)
    { // i = 2

        for (int j = 1; j <= 6 - i; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    printf("\n");

    /*
     *
     **
     ***
     ****
     *****
     */

    for (int i = 1; i <= 5; i++)
    { // i = 1 2 3 4 5

        for (int j = 1; j <= 5 - i; j++)
        { // 4 // 3  // 2  // 1 // 0
            printf(" ");
        }

        for (int j = 1; j <= i; j++) // 1 // 2 // 3
        {
            printf("*");
        }

        printf("\n");
    }

    printf("\n");

    /*
        *****
         ****
          ***
           **
            *


    */

    for (int i = 1; i <= 5; i++)
    {

        for (int k = 1; k <= i - 1; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= 6 - i; j++)
        {
            printf("*");
        }

        printf("\n");
    } //  11      12       13      14     15

    printf("\n");

    /*
     *     *                                //  21       22      23     24      25
     *   *
     *
     *   *
     *     *                                //  31      32      33       34     35
     */

    for (int i = 1; i <= 5; i++)
    {
        //   41     42       43     44      45
        for (int j = 1; j <= 5; j++)
        {

            if (i == j || i + j == 6)
            {
                printf("*"); //   51     52      53      54      55
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    printf("\n");

    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5; j++)
        {

            if (i < 4)
            {
                if (i == j || i + j == 6)
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {

                if ((i == 4 && j == 3) || (i == 5 && j == 3))
                {
                    printf("*");
                }
                else
                {
                    printf(" ");
                }
            }
        }

        printf("\n");
    }

    return 0;
}