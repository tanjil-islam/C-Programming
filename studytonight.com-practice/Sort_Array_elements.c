#include <stdio.h>


int main()
{
    int n,a[10],i,j,temp;
    printf("Enter your number:");
    scanf("%d",&n);

    printf("Enter %d number :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

     for(i=0;i<n-1;i++)
     {
         for(j=0;j<n-1-i;j++)
         {
             if(a[j]>a[j+1])
                {
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
                }
         }
     }

     printf("\nElement in accending order:");
     for(i=0;i<n;i++)
     {
         printf("\n%d",a[i]);
     }


    return 0;
}
