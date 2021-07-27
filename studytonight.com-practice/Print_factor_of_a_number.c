#include <stdio.h>

int main()

{
    int n,i;

    printf("Enter the number to find factors of:");
    scanf("%d",&n);
    printf("Factors of %d are\n",n);


    for(i=1;i<=n/2;i++)
    {
        if (n%i==0)

        printf("%d \n",i);
    }

    return 0;
}
