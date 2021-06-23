#include <stdio.h>

int main()
{
    int n,remainder,sum=0 ;

    printf("Enter the number: ");
    scanf("%d",&n);



    while (n!=0)
    {remainder=n%10;

    sum+=remainder;
    n=n/10;
    }
    printf("\n\nYour entered digit Sum= %d",sum);

    return 0;
}
