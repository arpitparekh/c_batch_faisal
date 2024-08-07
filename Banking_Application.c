#include <stdio.h>
#include <string.h>

struct Bank
{
    char name[50];
    int balance;
    int depost;
    int withdraw;
};

struct Bank b1; // global variable

void openAccount()
{

    printf("Enter Bank Name");
    scanf("%s", &b1.name);
    printf("Enter Deport Ammount\n");
    scanf("%d", &b1.depost);
    printf("Enter Withdraw Ammount\n");
    scanf("%d", &b1.withdraw);
    b1.balance = b1.depost - b1.withdraw;
}

void addMoney()
{
    printf("Enter Deport Ammount\n");
    int amt;
    scanf("%d", &amt);
    b1.balance += amt;
}

void withdrawMoney()
{
    printf("Enter Withdraw Ammount\n");
    int amt;
    scanf("%d", &amt);
    b1.balance -= amt;
}

void checkBalance()
{
    printf("Your Balance is %d\n", b1.balance);
}

void main()
{
jump:

    printf("Please Select One Option : \n");
    printf("1) Open Account\n");
    printf("2) Add Money\n");
    printf("3) Withdraw Money\n");
    printf("4) Check Balance\n");
    printf("5) Close Application\n");
    int choice;
    scanf("%d", &choice);
    switch (choice)
    {

    case 1:
        openAccount();
        goto jump;
        break;
    case 2:
        addMoney();
        goto jump;
        break;
    case 3:
        withdrawMoney();
        goto jump;
        break;
    case 4:
        checkBalance();
        goto jump;
        break;
    case 5:
        exit(0);
        break;
    case 6:
        printf("Please Choose Valid option\n");
        goto jump;
    }
}