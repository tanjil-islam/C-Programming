#include <stdio.h>
int main()
{
    int x=10;
    int *y;
    y=&x;
    *y=100;
    printf("%d\n",*y);
    printf("%p",y);


    return 0;
}
