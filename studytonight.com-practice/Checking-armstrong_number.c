#include <stdio.h>

int main ()
{
    int n,t,a,sum=0;

    printf("Enter your number: ");
    scanf("%d",&n);

    t=n;

    while (n!=0)
    {
        a=n%10;
        sum+=a*a*a;
        n=n/10;
    }
    printf("Sum=%d\n\n",sum);

    if(sum==t)
        printf("%d is an armstrong number",sum);
    else
        printf("%d is not armstrong number",sum);

    return 0;
}
