#include <stdio.h>
int main(int argc, char const *argv[])
{
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Thursday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thursday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;

    default:
        printf("Invalid choice...\n");
        break;
    }
    return 0;
}