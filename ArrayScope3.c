#include <stdio.h>

int main()
{
    int MyArray[5]= {12,23,54,22,32};
    MyArray[1]=76;
    MyArray[4]=26;
    for (int i=0; i<5; i++)
    {
        printf("Elements[%d]=%d\n",i,MyArray[i]);
    }
    return 0;
}
