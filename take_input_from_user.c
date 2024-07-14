#include<stdio.h>

int main(){

    // int a = 12;
    // printf("%d", a);

    printf("Please Enter some values");
    int n;
    scanf("%d", &n); // & mean location in c

    printf("Value entered by user is %d", n);

    printf("Enter 2 Values : ");
    int a, b;
    // scanf("%d", &a);
    // scanf("%d", &b);
    scanf("%d%d", &a, &b);

    int c = a + b;

    printf("addition is %d", c);

    return 0;
}