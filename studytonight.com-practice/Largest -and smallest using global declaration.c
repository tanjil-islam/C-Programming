#include<stdio.h>

int x,y;
int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");
    printf("\n\nEnter the two values to find the greatest and smallest number: \n");
    scanf("%d%d", &x, &y);

    if(x == y)
        printf("Both are equal\n");

    else if(x < y)
    {
        printf("\n\nThe largest number is %03d\n", y);
        printf("\nThe smallest number is %03d\n", x);

    }
    else    //Only possibility remaining
    {
        printf("The largest number is %03d\n", x);
        printf("The smallest number is %03d\n", y);
    }
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
