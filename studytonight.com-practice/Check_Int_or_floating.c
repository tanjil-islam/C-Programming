#include <stdio.h>

int main()
{
    char number[10];
    int f=0,i=0;
    printf("Enter your number:");
    scanf("%s",number);

    while(number[i++]!='\0')
    {
        if(number[i]=='.')
        {
            f=1;
            break;
        }
    }

    if (f)
        printf("\n\n%s is a floating number.",number);
    else
        printf("\n\n%s is an integer.",number);

    return 0;
}
