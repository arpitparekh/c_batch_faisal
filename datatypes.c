#include <stdio.h>

main()
{

    // datatypes

    // datatype varaible name = value;

    char cxfdsfdsf = '2'; // 1 byte  // 8 bit // 101010101

    short int short_integer = 1545; // 2 byte  //

    int i = 4554545; // 4 byte  //

    long int li = 35355454; // 8 byte

    long long int lli = 454545435435; // 16 byte

    float f = 45.45; // 4 byte

    double d = 454545.4545; // 8 byte

    long double ld = 3434434.343434; // 16 bit

    printf("Hello World");

    // format specifiers

    printf("  character is %c   ", cxfdsfdsf);
    printf("  short integer is  %hd   ", short_integer);
    printf("  integer is  %d   ", i);
    printf("  long integer is  %ld   ", li);
    printf("  long long integer is  %lld   ", lli);
    printf("  float is  %f   ", f);
    printf("  double is  %lf   ", d);
    printf("  long double is  %Lf   ", ld);

    int a = 12;
    int b = 13;

    printf("  a is %d and b is %d   ", a, b);
}
