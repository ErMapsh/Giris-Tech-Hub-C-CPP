#include <stdio.h>

void anotherMethod(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }

    if (ch >= 'a' && ch <= 'z')
    {
        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("Enter character is Vowel..\n");
            break;
        default:
            printf("Enter character is Consonent..\n");
            break;
        }
    }
    else
    {
        printf("Invalid input...\n");
    }
}

int main()
{
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        switch (ch)
        {
        case 'a':

        case 'e':

        case 'i':

        case 'o':

        case 'u':

        case 'A':

        case 'E':

        case 'I':

        case 'O':

        case 'U':
            printf("Enter character is Vowel..\n");
            break;

        default:
            printf("Enter character is Consonent..\n");
            break;
        }
    }
    else
    {
        printf("Not valid input..\n");
    }

    anotherMethod(ch);
    return 0;
}