#include<stdio.h>
#include<stdlib.h>

int main()
{
    int number;
    printf("\n\n\t\t Study tonight-Best place for learning");
    printf("\n\nEnter any number:");
    scanf("%d",&number);
    if(number < 100)

        printf("Number is less than 100\n");

    else if(number == 100)
        printf("Number is equal to 100\n");

    else
    printf("Number is greater than 100\n");


    printf("\n\n\t\t\tCoding is fun!");
    return 0;

}
