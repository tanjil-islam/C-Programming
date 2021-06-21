#include<stdio.h>

int main()
{
    int n,x,remainder,result=0;

    printf("Enter the number: ");
    scanf("%d",&n);

    x=n;

    while(x!=0)
    {
        remainder=x%10;
        result=result*10+remainder;
        x=x/10;
    }

    if(result==n)

        printf("This is palindrom number.");

    else

        printf("This is not palindrom number.");

    return 0;
}
