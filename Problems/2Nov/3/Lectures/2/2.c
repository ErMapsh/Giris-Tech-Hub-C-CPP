#include <stdio.h>

int main()
{
    float currentValue, withdrawalValue;
    printf("Enter initial value: ");
    scanf("%f", &currentValue);
    printf("Enter withdrawal Value: ");
    scanf("%f", &withdrawalValue);

    if (withdrawalValue <= 2000 && currentValue <= 2000)
    {

        if (withdrawalValue < currentValue)
        {
            if ((int)withdrawalValue  % 5 == 0)
            {
                withdrawalValue += 0.50f;
                printf("Available balance is %f", currentValue - withdrawalValue);
            }else{
                printf("Available balance is %f", currentValue);
            }
            
        }
        else
        {
            printf("insufficient Balance..\n");
        }
    }
    else
    {
        printf("Invalid input...\n");
    }

    return 0;
}