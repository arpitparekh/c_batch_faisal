#include <stdio.h>

int main()
{

    float balance, debit, credit, intrest = 0.1;
    printf("Enter your balance: ");
    scanf("%f", &balance); // 100
    printf("Enter your debit: ");
    scanf("%f", &debit); // 10
    printf("Enter your credit: ");
    scanf("%f", &credit);

    balance = balance + ((debit * intrest) / 100) + debit - credit;

    printf("balance is %f", balance);

    // (10*(0.1))/100 = 0.01

    // int a = 45;
    // scanf("%d", &a);  // 55

    // printf("%d", a);

    // int b = 10;

    // printf(" add is %d", a + b);
    
    return 0;
}