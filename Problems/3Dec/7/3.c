#include <stdio.h>

int main()
{

    int a[10] = {10, 20, 30, 10, 20, 50, 30, 10, 30, 10}, i, j, k, b[10], count, value, bsize = 0, bflag = 0;

    for (i = 0; i < 10; i++)
    {
        count = 1;
        value = a[i];

        // to checking another array having value
        for (k = 0; k < bsize; k++)
        {
            if (value == b[k])
            {
                bflag = 1;
                break;
            }else{
                bflag = 0;
            }
        }

        // if b array main element hoga to bflag = 1 ho jayega, and directly another element ke pass jayega
        if (bflag == 1)
        {
            continue;
        }

        // if new element count nahi huva hai, to yahape aa jayega aur no of values count krega
        for (j = i + 1; j < 10; j++)
        {
            if (a[j] == value)
            {
                count++;
            }
        }
        printf("%d ---> %d\n", value, count);

        // storing unique value in b array
        b[bsize] = value;
        bsize++;
    }

    return 0;
}