#include <stdio.h>

int main()
{
    float a, b;    // Normal variables
    float *x, *y;  // Pointer variables

    float sum, diff, mult, div;

    x = &a; // ptr1 stores the address of num1
   y = &b; // ptr2 stores the address of num2

    /* User input through pointer */
    printf("Enter any two real numbers: ");
    scanf("%f%f", x, y);

    /* Perform arithmetic operation */
    sum  = (*x) + (*y);
    diff = (*x) - (*y);
    mult = (*x) * (*y);
    div  = (*x) / (*y);

    /* Print the results */
    printf("Sum = %.2f\n", sum);
    printf("Difference = %.2f\n", diff);
    printf("Product = %.2f\n", mult);
    printf("Quotient = %.2f\n", div);

    return 0;
}
