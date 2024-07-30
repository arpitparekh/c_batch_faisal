#include <stdio.h>

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
        printf("\nNot a prime  number");
    }
    else
    {
        printf("\nPrime number");
    }
}

int main()
{
    
    isPrime(12);
    isPrime(13);
    isPrime(17);
    isPrime(23);

    return 0;
}