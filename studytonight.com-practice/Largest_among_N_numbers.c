#include <stdio.h>

int main()

{
    int n,i;
    float c,big;
    printf("Enter the number of elements:");
    scanf("%d",&n);

    printf("Enter %d number\n",n);


    for(i=1;i<=n;i++)
    {
        printf("Element %d:",i);
        scanf("%f",&c);
        if (big<c)
        big=c;
    }
    printf("\n\n\nThe largest of the %d numbers is  %f ", n, big);



}
