#include <stdio.h>
int sum(int x,int y,int *z)
{
    *z=x+y;
    return 0;

}
int main()
{
    int a=60;
    int b=90;
    int c;
    sum(a,b,&c);
    printf("%d",c);
    return 0;
}
