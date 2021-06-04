#include<stdio.h>

int sum(int x,int y,int *z){
    *z=x+y;
    return ;
}

main()
{
    int w=10;
    int j=20;
    int k;
    sum(w,j,&k);
    printf("%d",k);

}
