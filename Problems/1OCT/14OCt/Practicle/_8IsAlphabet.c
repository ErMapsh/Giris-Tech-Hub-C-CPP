#include<stdio.h>

// check given char is alphabet is or not

int main(){
    char ch;
    printf("Enter the character: ");
    scanf("%c", &ch);

    (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ? printf("Yes %c is alphabet\n", ch):printf("No, %c is not alphabet\n", ch);

    return 0;
}