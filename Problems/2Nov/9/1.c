#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*
        prime number means the number is div by only itself and 1.
        flag set as false --> number is not prime
        flag set as true --> number is prime
    */

    int num, flag = 0;
    printf("---Prime number checking---\nEnter number: ");
    scanf("%d", &num);

    // 1 and 0 is not the prime number
    if (num == 1 || num == 0)
        flag = 1;

    /*
        here we checking the number is divisiable by 2 to n-1
        if flag become 1 then its sure number is not prime because its divsiable by 3rd number
    */

    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {
            flag = 1; // number is not prime
            break;
        }
    }

    if (flag == 1)
    {
        printf("%d is composite number..\n", num);
    }
    else
    {
        printf("%d is prime number..\n", num);
    }
    return 0;
}