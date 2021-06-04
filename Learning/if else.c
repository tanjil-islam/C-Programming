#include <stdio.h>

int main()

{
    int age;
    printf("Please enter the age =");
    scanf("%d",&age);
    if (age >18)
    {
        printf("The age is greater than 18");
        if(age<21)
            printf("The age is greater than 18 but less than 21");
        else   printf("The age is greater than 18 but not less than 21");

    }
    else if (age ==18)
        printf("The age is equal to 18");

    else
        printf("The age is not greater than or equal 18");

    return 0;
}
