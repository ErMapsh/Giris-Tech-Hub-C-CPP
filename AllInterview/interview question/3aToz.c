#include<stdio.h>
int main()
{
    // 3. Write a C program to print all alphabets from a to z. - using while loop
    char ch = 'a';
    while (ch>='a' && ch<='z')
    {
       printf("%c ", ch);
       ch++;
    }
    
    return 0;
}