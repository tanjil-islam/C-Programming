#include <stdio.h>

int Sum(int a, int b)
{
    int sum=a+b;
    return sum;
}
int main()
{
    int x,y,result;
    printf("Please enter the number 1=\n");
    scanf("%d",&x);

    printf("Please enter the number 2=\n");
    scanf("%d",&y);
    result=Sum(x,y);
    printf("Sum is %d",result);

    return 0;
}
