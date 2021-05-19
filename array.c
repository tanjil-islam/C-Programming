#include<stdio.h>

int main()
{
    int arr[5];
    int i=0;

    for(i=0;i<5;i++){
       scanf("%d",&arr[i]);
    }

    printf("\nYou have entered\n");

    for(i=0;i<5;i++){
        printf("%d",arr[i]);
        printf("\n");
    }

    return 0;
}
