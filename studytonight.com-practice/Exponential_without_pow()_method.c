#include <stdio.h>
int main()
{
    int base,exp;
    printf("Enter your number:");
    scanf("%d%d",&base,&exp);

    long value=1;

    while(exp!=0)
    {
      value=value*base;
      --exp;
    }

    printf("Answer:=%ld",value);
}
