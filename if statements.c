#include <stdio.h>

int main()
{
    int age;
    printf("Enter the age");
    scanf("%d",&age);

    if(age > 18)
        printf("the age is greater than 18");

    if(age == 18)
        printf("the age is egual to 18");

    if(age < 18)
        printf("the age is less than 18");

    return 0;
}
