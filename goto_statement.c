#include <stdio.h>
#include <stdlib.h>

void isPrime(int n)
{

    int a = n;
    int flag = 0;

    for (int i = 2; i < n; i++)
    {
        if (a % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
    {
        printf("Not a prime  number");
    }
    else
    {
        printf("Prime number");
    }
}

int main()
{

faisal:

    printf("\nPlease Enter Number to find prime: ");
    int n;
    scanf("%d", &n);

    if (n == 0)
    {
        printf("\nYou Entered zero exiting program -------------");
        
        exit(0);   // it will close the program
    }

    isPrime(n);

    goto faisal;

    return 0;
}