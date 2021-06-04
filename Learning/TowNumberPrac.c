#include <stdio.h>

int main()
{
    int a,b,sum;
    int *x,*y;
    x=&a;
    y=&b;

    printf("ENter two any number:",x,y);
    scanf("%d%d",x,y);
    sum=*x + *y;
    printf("Sum=%d",sum);
    return 0;
}
