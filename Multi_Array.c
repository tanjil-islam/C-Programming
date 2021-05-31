#include <stdio.h>

int main()
{
    int MyArray[4][5]=

    {
        {3,9,7,8,4},///row 0
        {2,4,3,6,7},///row 1
        {4,3,5,9,8},///row 2
        {7,1,9,4,5},///row 3

    };
    for(int i=0; i<4; i++)
    {
        for (int j=0; j<5; j++)
        {
            printf("My Number Array[%d][%d]=%d\n",i,j,MyArray[i][j]);
        }
    }

    return 0;
}
