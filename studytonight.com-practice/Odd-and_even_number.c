#include<stdio.h>

int main()
{

    int x;
    for(x = 0; x <= 10; x++)
    {
        if(x&1)
            printf("\t\t\t\n\n%d is odd\n",x);
        else if(!(x&1))
            printf("\t\t\t%d is even\n",x);
    }


    return 0;
}
