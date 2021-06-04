#include <stdio.h>

void Product(int a, int b)
{
     int Product=a*b;
    printf("Product=%d\n",Product);
}
int main()
{
    int x,y;
    printf("Please enter the number 1=\n");
    scanf("%d",&x);

    printf("Please enter the number 2=\n");
    scanf("%d",&y);
    Product(x,y);
}
