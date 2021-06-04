#include <stdio.h>

int main()
{ int marks;
    printf("Please enter the marks=");
    scanf("%d",&marks);

    printf("%p",&marks); //where it is store


    switch (marks)
    {
    case 90:

        printf("Excellent");
        break;
    case 75:
        printf("Very good");
        break;

    case 60:
        printf("Good");
        break;
    case 40:
        printf("Ok");
        break;
    default:
        printf("Grade unavailable");
    }
    return 0;
}
