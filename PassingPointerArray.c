#include <stdio.h>
int getSum(int *array_val,int size)
{
    int sum=0;
    for (int i=0;i<size;i++)
    {
        sum+=array_val[i];
    }
    return sum;
}
int main()
{
int my_array[5]={34,64,18,95,68};
int mySum=getSum(my_array,5);
printf("The value of my sum=%d",mySum);
return 0;
}
