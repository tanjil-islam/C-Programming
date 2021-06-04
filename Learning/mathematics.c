#include <stdio.h>

int main()
{

//Summetion
    int a=33,b=77;
    int sum;
    sum=a+b;
    printf("sum =%d\n",sum);

//Substraction
    int subtraction;
    subtraction=a-b;
    printf("subtraction =%d\n",subtraction);

//Multiplication
    a=33,b=77;
    int multiplication;
    multiplication=a*b;
    printf("product =%d\n",multiplication);

//Division
    a=16,b=4;
    int division;
    division=a/b;
    printf("product=%d",division);

//Modulas
    a=13,b=2;
    float modulus;
    modulus =(float)a/b; //Typecasting
    printf("\nModulas = %0.2f",modulus); //For two space after 0
    return 0;
}
