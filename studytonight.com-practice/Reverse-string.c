#include <stdio.h>

int main()
{
    char str[500],rev[500];

    int i,j,count=0;

    scanf("%s",str);
    printf("\n String before reverse :%s",str);

    while (str[count]>0)
    {
        count++;
    }
    j= count-1;

    for (i=0; i<count; i++)
    {
        rev[i]=str[j];
        j--;
    }

    printf("\n\n String after reverse :%s",rev);

    return 0;
}
