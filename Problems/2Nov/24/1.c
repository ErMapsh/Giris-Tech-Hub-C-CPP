#include <stdio.h>

int main()
{

    int long num, temp;
    int rem, a0 = 0, a1 = 0, a2 = 0, a3 = 0, a4 = 0, a5 = 0, a6 = 0, a7 = 0, a8 = 0, a9 = 0;
    printf("Enter a number: ");
    scanf("%ld", &num);
    temp = num;

    while (temp != 0)
    {
        rem = temp % 10;
        switch (rem)
        {
        case 0:
            a0++;
            break;
        case 1:
            a1++;
            break;
        case 2:
            a2++;
            break;
        case 3:
            a3++;
            break;
        case 4:
            a4++;
            break;
        case 5:
            a5++;
            break;
        case 6:
            a6++;
            break;
        case 7:
            a7++;
            break;
        case 8:
            a8++;
            break;
        case 9:
            a9++;
            break;
        }
        temp /= 10;
    }

    if (a0 != 0)
    {
        printf("0 occured %d times\n", a0);
    }
    if (a1 != 0)
    {
        printf("1 occured %d times\n", a1);
    }
    if (a2 != 0)
    {
        printf("2 occured %d times\n", a2);
    }
    if (a3 != 0)
    {
        printf("3 occured %d times\n", a3);
    }
    if (a4 != 0)
    {
        printf("4 occured %d times\n", a4);
    }
    if (a5 != 0)
    {
        printf("5 occured %d times\n", a5);
    }
    if (a6 != 0)
    {
        printf("6 occured %d times\n", a6);
    }
    if (a7 != 0)
    {
        printf("7 occured %d times\n", a7);
    }
    if (a8 != 0)
    {
        printf("8 occured %d times\n", a8);
    }
    if (a9 != 0)
    {
        printf("9 occured %d times\n", a9);
    }

    return 0;
}