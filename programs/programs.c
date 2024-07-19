#include <stdio.h>

int main()
{

    // factorial of a number
    // prime number
    // reverse of a number
    // sum of digits

    // 4! = 4*3*2*1

    int a = 5;

    int fact = 1;

    for (int i = 1; i <= a; i++)
    {
        fact = fact * i;
    }

    printf("Factorial is %d\n", fact);

    /////////////////////////////////////////////////////////////////

    // prime number
    // 2 3 5 7 11 13 17 19 23

    int number = 7; // 2

    int flag = 0;

    for (int i = 2; i < number; i++)
    {

        if (number % i == 0)
        {
            flag = 1;
            break;
        }
    }

    // 1 // 0

    if (flag == 1)
    {
        printf("Not a prime number\n");
    }
    else
    {
        printf("Prime number\n");
    }

    ///////////////////////////////////////////////////////////////////

    // no of digit

    int g = 34535345;

    // 1234
    // 1234 / 10 = 123
    // 123 / 10 = 12
    // 12 / 10 = 1
    // 1 / 10 = 0

    int count = 0;

    while (g != 0)
    {

        g = g / 10; // 12345 // 1234  // 123  // 12 // 1
        count++;
    }

    printf("No of Digit is %d\n", count);

    /////////////////////////////////////////////////////////////////////////

    // reverse of a number

    // 1234
    
    // 1234 % 10 = 4
    // 1234 / 10 = 123
    // 123 % 10 = 3
    // 123 / 10 = 12
    // 12 % 10 = 2
    // 12 / 10 = 1
    // 1 % 10 = 1
    // 1 / 10 = 0
    // 4 3 2 1

    int m = 1234;
    int original = m;
    int reverse = 0; // 4321

    while(m!=0){
        
        int last_digit = m % 10; // 4  // 3  // 2 // 1

        reverse = reverse * 10 + last_digit;
        
        m = m / 10;  // 1
    }

    if(original==reverse){
        printf("\nNumber is palindrome");
    }else{
        printf("\nNumber is not palindrome\n");
    }

    // armstrong number
    // 153
    
    // no of digit // 3

    // 2^3 + 5^3 + 1^3 = 152

    char c = 'f';
    int j = 102;

    printf("\n%d\n", c);
    printf("\n%c\n", j);

    // a = 12
    // b = 13

    int a1 = 12;   // 25
    int b1 = 13;   // 12

    // arithmetic operator

    a1 = a1 + b1;  //
    b1 = a1 - b1;
    a1 = a1 - b1;  // 13

    // int temp = a1;  // 12
    // a1 = b1;   // 13
    // b1 = temp;  // 

    printf("\n%d\n", a1);
    printf("\n%d\n", b1);

    return 0;
}