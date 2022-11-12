#include <stdio.h>
#include <math.h>
int main()
{
    int choice;
    printf("1.print all even numbers up to 50\n2.print square and square root of given number by user\nEnter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        int i = 1;
        while (i <= 50)
        {
            /* this while loop runs until condition gonna false
            condition false when --> (i <= 50) --> (51 <= 50)
            */
            if (i % 2 == 0)
            {
                printf("%d ", i);
            }
            i++;
        }
        break;

    case 2:
        // pow function takes double, so we need double for it
        double a;
        printf("Enter your Number: ");
        scanf("%lf", &a);
        printf("Square of your number is %.0lf\n", pow(a, 2));
        printf("Square root of your number is %.0lf\n", sqrt(a));
        break;

    default:
        // if something not in case
        printf("Invalid choice, Try again...\n");
        break;
    }
    return 0;
}