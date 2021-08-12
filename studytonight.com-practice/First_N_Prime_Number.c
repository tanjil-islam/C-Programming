#include <stdio.h>

int main()
{
    int n,i;

    printf("Enter the number of prime number:");
    scanf("%d",&n);
    int num = 0;

    for(i=2;i<=n/2;i++){
        if(n%i == 0){
            num = 1;
        }
    }

    if(num == 1){
        printf("This is not a prime number");
    }else{
        printf("This is a prime number");
    }

    return 0;
}
