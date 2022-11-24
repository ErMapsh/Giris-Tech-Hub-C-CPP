#include <stdio.h>

int main()
{
    int choice, num;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("1.Positive or Negative\n2.odd or even\n3.Mul table\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        if (num == 0)
        {
            printf("Enter numbers is zero..\n");
        }
        else if (num < 0)
        {
            printf("Enter number is negative..\n");
        }
        else
        {
            printf("Enter number is positive..\n");
        }
        break;
    case 2:
        num % 2 == 0 ? printf("Enter number is Even..\n") : printf("Enter number is odd");
        break;

    case 3:
        if (num > 0)
        {
            int i = 1;
            while (i <= 10)
            {
                printf("%d * %d = %d\n", num, i, num * i);
                i++;
            }
        }
        else
        {
            printf("Enter numbers sould positive...\n");
        }
    default:
        break;
    }

    return 0;
}