#include <stdio.h>
#include <string.h>

struct Student
{
    char name[50];
    int roll;
    int age;
};

int main()
{

    // strcuture
    // is group of datatype under single datatype name

    struct Student s1;
    s1.roll = 1;
    s1.age = 12;
    strcpy(s1.name, "faisal");

    struct Student s2;
    s2.roll = 2;
    s2.age = 13;
    strcpy(s2.name, "maulik");

    printf("Roll no is %d\n", s1.roll);
    printf("Age no is %d\n", s1.age);
    printf("Name no is %s\n", s1.name);

    printf("Roll no is %d\n", s2.roll);
    printf("Age no is %d\n", s2.age);
    printf("Name no is %s\n", s2.name);

    return 0;
}
