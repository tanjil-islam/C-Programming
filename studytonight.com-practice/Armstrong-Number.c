#include <stdio.h>
#include<math.h>

int main()
{
    int t,i,n,sum,a;

    printf("\t\tThe armstrong number between 1 to 500 are :   \n\n");


    for(i=0; i<=500; i++)
    {
        t=i;
        sum=0;
        while (t!=0)
        {
            a=t%10;
            sum+=a*a*a;
            t=t/10;

        }
        if(sum==i)
            printf("%d\n\n",i);
    }

    return 0;
}
