#include <stdio.h>

int main()
{
    int a, b;
    char choice;


    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    printf("+\n-\n*\n/\nEnter your choice: ");
    scanf(" %c", &choice);

    /*
    printf("Enter a and b: ");
    scanf("%d%d", &a, &b);
    printf("Enter your choice: ");
    scanf("%c", &choice);
    */

    switch (choice)
    {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%d", a / b);
        break;
    default:
        printf("Invalid input...\n");
        break;
    }
    return 0;
}