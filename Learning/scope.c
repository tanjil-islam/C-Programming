#include <stdio.h>
///global variable
int global_v=25;
void NumberPrint()
{ int Num_local=30;//local
    printf("Local +50 =%d\n",global_v+50);
}

int main()
{int Num_local=30;
    NumberPrint();
    ///local variable
    int local_v=20;
printf("Local=%d\n",Num_local);
    printf("Global=%d\n",local_v);
    return 0;
}
