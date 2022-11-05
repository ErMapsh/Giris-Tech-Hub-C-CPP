#include <stdio.h>

int main()
{
    long salesValue;
    printf("Enter the sales value: ");
    scanf("%ld", &salesValue);

    /*
       x / salesValue * 100 = per

       x = per * salesValue / 100
    */

    if (salesValue > 0 && salesValue <= 5000)
    {
        printf("Commision is %ld\n", 0);
    }
    else if (salesValue > 5000 && salesValue <= 10000)
    {
        printf("Commision is %ld\n", 5 * salesValue / 100);
    }
    else if (salesValue > 10000 && salesValue <= 20000)
    {
        printf("Commision is %ld\n", 10 * salesValue / 100);
    }
    else if (salesValue > 20000 && salesValue <= 30000)
    {
        printf("Commision is %ld\n", 12 * salesValue / 100);
    }
    else if (salesValue > 30000)
    {
        printf("Commision is %ld\n", 15 * salesValue / 100);
    }
    else
    {
        printf("Sales value not should be negative...\n");
    }

    return 0;
}