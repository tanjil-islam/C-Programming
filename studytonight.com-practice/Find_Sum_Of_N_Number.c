#include<stdio.h>

int main()
{
    int n,i,value,sum=0;

    printf("Enter the number of intergers you want to add:");
    scanf("%d",&n);
    printf("Enter %d integers:\n",n);

    for (i=1;i<=n;i++)
    {
        scanf("%d",&value);

        sum+=value;
    }

    printf("Sum of entered numbers:%d",sum);
    return 0;
}
