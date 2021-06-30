#include <stdio.h>

int main()
{
    int n,i;
    float x,sum=0;

    printf("Enter your numbers: ");
    scanf("%d",&n);
    printf("You have entered %d numbers\n",n);

    for (i=0; i<n; i++)
    {
        scanf("%f",&x);
        sum+= x;

    }
    printf("The average of your entered number = %f",(sum/n));
    return 0;
}
