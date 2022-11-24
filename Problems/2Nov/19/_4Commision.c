#include <stdio.h>

int main()
{
    long salesValue, commsion;
    printf("Enter sales value: ");
    scanf("%ld", &salesValue);
    /*
        commision/salesValue * 100 = comm rate
        commision = comm rate * salesValue / 100
    */

    if (salesValue >= 0 && salesValue <= 5000)
    {
        commsion = 0;
        printf("Commision(0%%) on %ld is %ld", salesValue, commsion);
    }
    else if (salesValue > 5000 && salesValue <= 10000)
    {
        commsion = 5 * salesValue / 100;
        printf("Commision(5%%) on %ld is %ld", salesValue, commsion);
    }
    else if (salesValue > 10000 && salesValue <= 20000)
    {
        commsion = 10 * salesValue / 100;
        printf("Commision(10%%) on %ld is %ld", salesValue, commsion);
    }
    else if (salesValue > 20000 && salesValue <= 30000)
    {
        commsion = 12 * salesValue / 100;
        printf("Commision(12%%) on %ld is %ld", salesValue, commsion);
    }
    else if (salesValue > 30000)
    {
        commsion = 15 * salesValue / 100;
        printf("Commision(15%%) on %ld is %ld", salesValue, commsion);
    }

    return 0;
}