#include<stdio.h>

int main()
{
    printf("\n\n\t\tStudytonight - Best place to learn\n\n\n");

    // Local Variable Definition
    char grade;
    printf("Enter your grade:\n");
    scanf("%c", &grade);

    switch(grade)
    {
        case 'a':
            printf("Excellent\n");
            break;
        case  'b':
            printf("Keep it up!\n\n");
            break;
        case 'c':
            printf("Well done\nbreak keyword takes execution to exit the switch case\n\n");
            break;
        case 'd':
            printf("You passed\n");
            break;
        case 'f':
            printf("Better luck next time\n");
            break;
        default:
            printf("Invalid grade\n");
    }
    printf("Your grade is: %c\n",grade);
    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;

}
