#include <stdio.h>
#include <math.h>

int main()
{
    double num;
    printf("Enter the number: ");
    scanf("%lf", &num);
    // printf("%f", sqrt(num));

    printf("SQRT is %f\n", sqrt(num));

    printf("power is %f\n", pow(2, num));

    printf("Cube is %f\n", cbrt(num));

    /*

    Basic functions:

sqrt(x): Square root
cbrt(x): Cube root
pow(x, y): x raised to power y
exp(x): Exponential function (e^x)
log(x): Natural logarithm
log10(x): Base-10 logarithm


Trigonometric functions:

sin(x), cos(x), tan(x): Sine, cosine, tangent
asin(x), acos(x), atan(x): Inverse sine, cosine, tangent
sinh(x), cosh(x), tanh(x): Hyperbolic sine, cosine, tangent


Rounding and absolute value:

ceil(x): Round up to the nearest integer
floor(x): Round down to the nearest integer
round(x): Round to the nearest integer
fabs(x): Absolute value of a floating-point number


Other useful functions:

fmod(x, y): Floating-point remainder of x/y
fmax(x, y), fmin(x, y): Maximum and minimum of x and y
isnan(x): Check if x is NaN (Not a Number)
isinf(x): Check if x is infinite

    */

    return 0;
}