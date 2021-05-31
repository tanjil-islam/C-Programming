#include <stdio.h>
#include<stdlib.h>
int main()
{
    int ArrayNumber[6]= {22,14,33,64,84,64};
    int accessArray=ArrayNumber[2];
    printf("Value=%d\n",accessArray);
//char CharArray[4]={'a','b','c','d'};
    for(int i=0; i<6; i++)
    {
        printf("Element[%d]=%d\n",i,ArrayNumber[i]);
    }


    return 0;
}
