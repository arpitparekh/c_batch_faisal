#include <stdio.h>
// #include <math.h>

// void display();
void faisal()
{ // defination of function
    // no return type // no parameter
    printf("\nThis is my Function\n");
}

void fun(int a) // int a = 12;
{
    printf("%d\n", a);
}

void sum(int a, int b)
{
    // no return type with parameter
    printf("\nSum is %d\n", a + b);
}

int study()
{
    return 565; // function will act as a value
}

int mul(int a, int b)
{
    return a * b;
}

int calculate(int n) // code reusability
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    return sum;
}

void main()
{ // function defination  // with return type // no parameter

    // function?
    // fucntion is a block of code that runs when we call it
    // we can call same function multiple times
    // there aew 2 types of function
    // library function
    // user define function

    // pow
    // sqrt
    // abs
    // cbrt
    // floor
    // ceil  // many more

    // user define function
    // functio name
    // function body
    // function parameter
    // function returntype

    faisal(); // function calling
    faisal();
    faisal();
    faisal();
    faisal();

    fun(12);
    fun(15);
    fun(16);
    fun(99);
    fun(1234);

    sum(12, 13);
    sum(99, 64);
    sum(33, 13);
    sum(1, 9);

    // study()

    printf("\n%d\n", study());

    int result = 10 + study();

    printf("\n%d", result);

    printf("\nMultiplication is %d", mul(10, 20));

    sum(mul(10, 20), mul(45, 0));
    sum(mul(10, 30), mul(45, 1));

    printf("\nSum of elements are : %d ", calculate(10));
    printf("\nComplex Calculation is : %d", mul(calculate(10), calculate(20)));
}
