#include <stdio.h>

void Sum(int a, int b)
{
    int Sum=a+b;
    printf("Sum=%d\n",Sum);
}
int main()
{
    int x,y;
    printf("Please enter the number 1=\n");
    scanf("%d",&x);

    printf("Please enter the number 2=\n");
    scanf("%d",&y);
    Sum(x,y);
}
