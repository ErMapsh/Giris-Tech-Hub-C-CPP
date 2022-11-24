#include <stdio.h>

int main()
{
    // flag --> 0 is for not prime
    // flag --> 1 is for prime
    int num, flag = 1; // we are assuming here number is prime
    printf("Enter the number: ");
    scanf("%d", &num);

    if (num == 0 || num == 1)
    {
        // printf("Not a 0 and 1");
        flag = 0;
    }

    // if this loop got break then its not a prime number
    int i = 1;
    do
    {   
        if (num == 2)
        {
            flag = 1;
            break;
        }
        
        i++;
        // printf("%d %d = %d\n", num, i, num % i);
        if (num % i == 0)
        {

            flag = 0;
            break;
        }
    } while (i < (num - 1));

    flag == 1 ? printf("prime Number") : printf("Not Prime Number...");
    return 0;
}