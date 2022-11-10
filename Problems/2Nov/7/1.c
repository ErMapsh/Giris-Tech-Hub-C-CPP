#include <stdio.h>

int main()
{

    int choice;
    printf("1. 1 to 20 numbers using while loop\n2. 20 to 1 numbers using  while loop\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        int i = 1;
        while (i <= 20)
        {
            printf("%d ", i);
            i++;
        }
        break;

    case 2:
        int j = 20;
        while (j >= 1)
        {
            printf("%d ", j);
            j--;
        }
        break;

    default:
        printf("Invalid choose...");
        break;
    }

    return 0;
}