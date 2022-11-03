#include <stdio.h>

int main()
{

    char ch;
    printf("Enter your character: ");
    scanf("%c", &ch);

    if ((ch >= 'a') && (ch <= 'z'))
    {
        printf("Is Lowercase character..\n");
    }
    else if ((ch >= 'A') && (ch <= 'z'))
    {
        printf("Is Uppercase character..\n");
    }
    else
    {
        printf("Not in range...");
    }

    return 0;
}