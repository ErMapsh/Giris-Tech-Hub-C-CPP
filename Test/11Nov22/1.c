#include <stdio.h>
int main()
{
    int num; // initialization of var

    printf("Enter the number: ");
    scanf("%d", &num); // getting input from user, %d is specifier and & (ampersand) stroing the input to the address var

    if (num == 0) // if num is 0
    {
        printf("Enter number is Zero..\n");
    }
    else if (num > 0) // if num is greater than 0
    {
        printf("Enter number is Positive...\n");
    }
    else // else num is less than 0
    {
        printf("Enter number is Negative\n");
    }

    return 0;
}