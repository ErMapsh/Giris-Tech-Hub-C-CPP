#include <stdio.h>

int main()
{
    char ch;
    printf("Enter your character: ");
    scanf("%c", &ch);

    ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) ? (ch == 'a' || ch ==  'e' ||ch ==  'i' ||ch ==  'o' ||ch ==  'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')? printf("%c is Vowel\n", ch) : printf("%c is consonants \n", ch) : printf("%c is not in consonants and Vowels\n", ch);

    return 0;
}