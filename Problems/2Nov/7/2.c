#include <stdio.h>
int main(int argc, char const *argv[])
{
    int choice;
    printf("1.print all even numbers upto 25\n2.print all odd numbers upto 25\n3.Multiplication table of number\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        for (int i = 1; i <= 25; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d ", i);
            }
        }
        printf("\n");
        break;
    case 2:
        for (int j = 1; j <= 25; j++)
        {
            if (j % 2 == 1)
            {
                printf("%d ", j);
            }
        }
        printf("\n");
        break;
    case 3:
        int num;
        printf("Enter the number: ");
        scanf("%d", &num);
        for (int k = 1; k <= 10;)
        {
            printf("%d ", num * k);
            k++;
        }
        printf("\n");
        break;
    default:
        printf("Invalid choice..");
        break;
    }
    return 0;
}