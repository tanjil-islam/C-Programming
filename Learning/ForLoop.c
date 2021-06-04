#include<stdio.h>

void printLoop(int n,char arr[])
{
    int i;
    for(i=0; i<n; i++)
    {
        printf("%s\n", arr);
    }
}


int main()
{
    int num;
    char str[20];
    printf("\nEnter your name : ");
    gets(str);

    printf("Enter a number");
    scanf("%d",&num);
    printLoop(num,str);
}
