#include <stdio.h>

int main()
{
    int n,a[100],i,x,y;
    printf("Enter number of elements in array:");
    scanf("%d",&n);

    printf("Enter %d element:\n",n);
    for(i=0; i<n; i++)
        scanf("%d",&a[i]);

    printf("Enter the location where you want to delete element from:");
    scanf("%d",&x);
    if(x>=n+1)
        printf("Deletion is not possible.");
    else
        for(i=x-1; i<n-1; i++)
            a[i]=a[i+1];
    printf("Resultant array is:\n");
    for(i=0; i<n-1; i++)
        printf("%d\n",a[i]);
    return 0;
}
