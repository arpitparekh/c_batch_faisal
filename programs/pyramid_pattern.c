#include <stdio.h>

/*
    *
   ***
  *****
 *******
*********

1/1
2/3
3/5
4/7
5/9
....
n/(2n-1)

*/

int main()
{

    for (int i = 1; i <= 5; i++)
    {

        for (int j = 1; j <= 5 - i; j++) // space
        {
            printf(" ");
        }

        for (int j = 1; j <= (2 * i) - 1; j++) // space
        {
            // conditioh
            if (i == 5 || j == 1 || j == (2 * i) - 1)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        printf("\n");
    }

    return 0;
}