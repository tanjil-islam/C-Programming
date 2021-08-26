#include <stdio.h>

int main()
{
    int n,x,i,a[100],y;
    printf("Enter the size of the array:");
    scanf("%d",&n);

    printf("\nEnter the %d elements of the array:\n",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    x=a[0];

    for(i=1; i<n; i++)
    {
        if(x<a[i])
        {
            x=a[i];
        }
    }
    printf("The largest element:%d",x);

    y=a[0];

    for(i=1; i<n; i++)
    {
        if(y>a[i])
        {
            y=a[i];
        }
    }
    printf("\nThe smallest element:%d",y);

    return 0;
}
