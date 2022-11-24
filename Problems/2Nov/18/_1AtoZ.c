#include <stdio.h>

int main()
{
    char ch = 'A';
    do
    {
        printf("%c ", ch);
        ch++;
    } while (ch >= 'A' && ch <= 'Z');
    return 0;
}