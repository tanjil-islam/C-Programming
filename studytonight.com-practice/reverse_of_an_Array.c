#include <stdio.h>

int main()
{
    int n,i,a[100];
    printf("Enter your number:");
    scanf("%d",&n);
    printf("Enter %d element:\n",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reversing array is:");
    for(i=n-1; i>=0; i--)
    {
        printf("\n%d",a[i]);
    }


    return 0;
}
