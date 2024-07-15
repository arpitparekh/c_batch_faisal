// conditions are the controll flow of the program

// if else
// if else ladder  // nested if else

// switch

// if else

#include <stdio.h>

int main()
{

    int a = 12;
    if (a < 13)
    {
        printf("Value is less then 13\n");
    }

    int g = 13;
    if (g < 14)
    {
        printf("Value is less then 14\n");
    }
    // escape sequence
    // \n \t
    printf("This is print function\n");

    int j = 44;
    if (j < 42)
    {
        printf("Value is less then 42\n");
    }
    else
    {
        printf("Value is greater then 42\n");
    }

    int x, y;
    scanf("%d%d", &x, &y);

    if (x < y)
    {
        printf("%d is less then %d\n", x, y);
    }
    else
    {
        printf("%d is greater then %d\n", x, y);
    }

    /////////////////////////////////////////////////////////////////

    // if else ladder => else if

    int x1 = 42;

    if (x1 < 45)
    {
        printf("Value is less then 47\n");
    }
    else if (x1 > 45)
    {
        printf("Value is greater then 47\n");
    }
    else
    {
        printf("Value is equal to 47\n");
    }

    if (x1 % 2 == 0)
    {
        printf("Value is even\n");
    }
    else
    {
        printf("Value is odd\n");
    }

    /////////////////////////////////////////////////////////////////

    // nested if else

    int h = 23;

    if (h > 20)
    {

        if (h < 4)
        {
            printf("inner if\n");
        }
        else
        {
            if (h > 5)
            {
                if (h < 20)
                {
                    printf("inner inner  if\n");
                }
                else
                {
                    printf("inner inner else\n");
                }
            }
            else
            {
                printf("inner inner else\n");
            }
        }
    }
    else
    {
        if (h < 99)
        {
            printf("second inner if\n");
        }
        else
        {
            printf("second inner else\n");
        }
    }
    return 0;
}
