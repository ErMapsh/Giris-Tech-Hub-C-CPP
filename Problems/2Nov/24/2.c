#include <stdio.h>
#include <math.h>

int main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (int i = 1; i <= num; i++)
    {
        int len = 0, temp = i, sum = 0, rem;
        while (temp != 0) // to find length
        {
            len++;
            temp /= 10;
        }
        temp = i;

        while (temp != 0) // armstrong logic
        {
            rem = temp % 10;
            sum += pow(rem, len);
            temp /= 10;
        }

        if (sum == i)
        {
            printf("%d ", i);
        }
    }
}