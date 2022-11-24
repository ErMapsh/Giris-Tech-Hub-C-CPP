#include <stdio.h>

int main()
{
    int choice, a, b;
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    printf("1.Add\n2.Sub\n3.Mul\n4.div\n5.mod\nEnter your choice: ");
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
        printf("%d %% %d= %d",a, b, a%b);
        // printf("Mod is ", a % b);
        break;
    default:
        printf("Invalid choice...");
        break;
    }
    return 0;
}