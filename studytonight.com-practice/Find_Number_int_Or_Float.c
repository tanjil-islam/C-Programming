#include <stdio.h>

int main()
{
    char number[100];
    int f=0,i=0;
    printf("Enter your number:");
    scanf("%s",number);

    while(number[i++] != '\0')
    {
        if(number[i]=='.')
        {
            f=1;
            break;
        }
    }
    if(f)
        printf("%s is a floating point.",number);
    else
        printf("%s is an integer number.",number);

    return 0;
}
