#include <stdio.h>
#include <math.h>

int main()
{   
    // my logic
    int num, len = 0, temp;
    printf("Enter the number: ");
    scanf("%d", &num);
    temp = num;

    while (temp != 0)
    {
        temp /= 10;
        len++;
    }
    printf("The length of %d is %d\n", num, len);
    int Logicof10 = pow(10, len - 1);

    int i = 0;
    while (i < len)
    {
        int count = 0, temp3 = num;
        int selectDigit = temp3 / Logicof10;
        int rem = selectDigit % 10;
        // printf("Select: %d\n", rem);

        for (int j = 0; j < len; j++)
        {
            int reminder = temp3 % 10;
            if (reminder == rem)
            {
                count++;
            }
            temp3 = temp3 / 10;
        }
        printf("%d is occured %d\n", rem, count);
        Logicof10 = Logicof10 / 10;
        temp3 = temp3 / 10;
        i++;
    }

    return 0;
}