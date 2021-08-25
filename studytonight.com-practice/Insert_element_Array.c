#include <stdio.h>

int main()
{
    int n,i,a[100],x,y;
    printf("Enter your number:");
    scanf("%d",&n);
    printf("Enter %d element:\n",n);
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

    printf("Enter the location where you want to insert an element:");
    scanf("%d",&x);
    printf("Enter the value to insert:");
    scanf("%d",&y);

    for(i=n-1;i>=x-1;i--)
        a[i+1]=a[i];
    a[x-1]=y;

    printf("Resultant array:\n");
    for(i=0;i<=n;i++)
        printf("%d\n",a[i]);



    return 0;
}
