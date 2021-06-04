#include <stdio.h>

int ArraySum(int MyArray[],int size)
{
    int sum=0;
    for(int i=0; i<size; i++)
    {
       /// sum=sum+MyArray[i];
        sum+= MyArray[i];
    }
    return sum;
}


int main()
{
    int MyNumber[5]= {33,23,54,16,87};
    int Sum_of_Array=ArraySum(MyNumber,5);
    printf("My Sum=%d",Sum_of_Array);
    return 0;
}
