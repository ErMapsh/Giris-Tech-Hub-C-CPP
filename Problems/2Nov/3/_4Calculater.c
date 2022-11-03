#include <stdio.h>

int main()
{

    int a, b;
    int choice;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    printf("\n-----Operations----\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Mod\nEnter your choice--> ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("%d + %d = %d", a, b, a + b);
        break;
    case 2:
        printf("%d - %d = %d", a, b, a - b);
        break;
    case 3:
        printf("%d * %d = %d", a, b, a * b);
        break;
    case 4:
        printf("%d / %d = %d", a, b, a / b);
        break;
    case 5:
        printf("Remider is %d", a % b);
        break;

    default:
        break;
    }

    return 0;
}