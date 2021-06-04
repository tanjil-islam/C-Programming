#include <stdio.h>


int main()
{
int val=30;
int *pointer_p;
pointer_p=&val;

printf("Address of val=%x\n",&val);
printf("Value of pointer variable=%x\n",pointer_p);
printf("Value of pointer=%d\n",*pointer_p);
return 0;
}
