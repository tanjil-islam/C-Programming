#include <stdio.h>
int main()
{
    float a,b;
    float *x,*y;
    float sum,diff,mult,div;
    x=&a;
    y=&b;
    printf("Enter any two number:",x,y);
    scanf("%f%f",x,y);


    sum=*x+*y;
    diff=*x-*y;
    mult=*x * *y;
    div=*x / *y;

    printf("Sum=%f\n",sum);
    printf("Mult=%f\n",mult);
    printf("Diff=%f\n",diff);
    printf("Div=%f\n",div);


    return 0;
}
