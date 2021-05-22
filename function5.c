#include <stdio.h>

int Product(int a, int b)
{
    return(a*b);
}

int main()
{
    int x,y;
    printf("PLease enter two numbers");
    printf("number1");
    scanf("%d",&x);

    printf("number2");
    scanf("%d",&y);
    int prod;
    prod=Product(x,y);
    printf("Product=%d",prod);
}
