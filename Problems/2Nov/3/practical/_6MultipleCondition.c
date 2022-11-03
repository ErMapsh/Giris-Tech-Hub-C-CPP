#include <stdio.h>

int main()
{

    int choice, num, temp;

    printf("Enter your number: ");
    scanf("%d", &num);
    temp = num;

    printf("1.Positive Or Negative\n2.Odd or Even \n3.Reverse(Only applicable for 3 digit number)\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        if (num >= 0)
        {
            printf("Number is Positive.....");
        }
        else
        {
            printf("Number is Negative.....");
        }
        break;

    case 2:
        num % 2 == 0 ? printf("Number is Even...") : printf("Number is odd...");
        break;

    case 3:
        int rev = 0, rem;
        rem = num % 10;
        rev = rev + (rem * 100);
        num = num / 10;

        rem = num % 10;
        rev = rev + (rem * 10);
        num = num / 10;

        rem = num % 10;
        rev = rev + (rem * 1);
        num = num / 10;

        printf("Reverse number is %d\n", rev);
        break;
    default:
        printf("Invalid Input....\n");
        break;
    }
    return 0;
}