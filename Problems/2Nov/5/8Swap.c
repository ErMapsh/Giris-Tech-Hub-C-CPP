#include <stdio.h>
#include <math.h>

void swapNumber(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{

    int choice;
    printf("\n1.SwapNumber\n2.Palimdrome\n3.Cube\n4.Total number of Days in Month \n5. Number is Positive, negative or zero\nEnter your choice..");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        int a, b, temp;
        printf("Enter your a: ");
        scanf("%d", &a);
        printf("Enter your b: ");
        scanf("%d", &b);
        printf("Before swapping a = %d, b = %d\n", a, b);
        temp = a;
        a = b;
        b = temp;
        printf("After swapping a = %d, b = %d\n", a, b);
        break;

    case 2:
        int number, rev;
        printf("Enter 3 digit number: ");
        scanf("%d", &number);
        rev = (number % 10) * 100 + ((number / 10) % 10) * 10 + (number / 10);
        rev == number ? printf("Number is palimdrom\n") : printf("Number is not Palimdrome..\n");
        break;

    case 3:
        int n;
        printf("Cube of %d is %d\n", n, pow(n, 3));
        break;

    case 4:
        int month;
        printf("Enter the number for month: ");
        scanf("%d", &month);
        switch (month)
        {
        case 1:
            printf("31 days\n");
            break;
        case 2:
            printf("28 days in a common year and 29 days in leap years\n");
            break;
        case 3:
            printf("31 days\n");
            break;
        case 4:
            printf("30 days\n");
            break;
        case 5:
            printf("31 days\n");
            break;
        case 6:
            printf("30 days\n");
            break;
        case 7:
            printf("31 days\n");
            break;
        case 8:
            printf("31 days\n");
            break;
        case 9:
            printf("30 days\n");
            break;
        case 10:
            printf("31 days\n");
            break;
        case 11:
            printf("30 days\n");
            break;
        case 12:
            printf("31 days\n");
            break;

        default:
            printf("Invalid choice..\n");
            break;
        }

        break;

    case 5:
        int num , ch;
        printf("Enter number: ");
        scanf("%d", &num);

        ch = num == 0 ? num : (num > 0) ? 1
                                        : 2;

        switch (ch)
        {
        case 0:
            printf("Enter number is 0...\n");
            break;

        case 1:
            printf("Enter %d number is Positive number\n", num);
            break;
        case 2:
            printf("Enter %d number is Negative number\n", num);
            break;
        default:
            printf("Something went wrong...\n");
            break;
        }

    default:
        printf("Invalid choice..\n");
        break;
    }
    return 0;
}