#include <stdio.h>

int main()
{
    int n,a[100],i,sum=0;
    printf("Enter the number of integers you want to add: ");
    scanf("%d",&n);

    printf("Enter %d element:\n",n);
    for(i=0;i<n;i++)

       {
            scanf("%d",&a[i]);
            sum+=a[i];
       }
    printf("Sum=%d",sum);


    return 0;
}
