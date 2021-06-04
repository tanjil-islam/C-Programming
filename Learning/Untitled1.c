#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sum=0;
    int num;
    int i;

    printf("Please enter your number : \n");
    scanf("%d",&num);

   // for(i=0;i<5;i++){
     //   sum +=(num%10);
       // num=num/10;
    //}

    //printf("Sum is %d",sum);

    while(num !=0){
        sum +=(num%10);
        num=num/10;
    }

    printf("Sum is %d",sum);

}
