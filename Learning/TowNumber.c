#include <stdio.h>

int main()
{
    int num1, num2, sum;
    int *a, *b;

    a = &num1; // a stores the address of num1
    b = &num2; // bstores the address of num2

    printf("Enter any two numbers: ");
    scanf("%d%d",a, b);

    sum = *a+ *b;

    printf("Sum = %d", sum);

    return 0;
}
