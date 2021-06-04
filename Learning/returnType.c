#include<stdio.h>

int divide(int a, int b){
    //if(b==0){
      //  return 0;
    //}
    return a/b;
}
int main()
{
    int n,x;
    scanf("%d",&n);
    scanf("%d",&x);
    if(x==0){
        printf("Divide by 0 is not allowed ");
        return 0;
    }else if(x>n){
        printf("Result is float number not allowed ");
        return 0;
    }

    printf("Result is %d",divide(n,x));

    return 0;
}
