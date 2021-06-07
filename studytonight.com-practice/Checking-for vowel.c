#include <stdio.h>

int main()
{
    printf("\n\n\t\tStudy tonight-Best place for learn");

   char character;
   printf("\n\nInput a character:");
   scanf("%c",&character);

    switch (character)
    {
    case 'a':
        case 'A':
            case 'e':
                case 'E':
            case 'i':
         case 'I':
    case 'o':
        case 'O':
            case 'u':
                case 'U':
                    printf("%c is a vowel.",character);
                    break;
                default:
                    printf("%c is not a vowel.",character);
                    break;
    }

    printf("\n\n\t\t\tCoding is fun!");
    return 0;
}
