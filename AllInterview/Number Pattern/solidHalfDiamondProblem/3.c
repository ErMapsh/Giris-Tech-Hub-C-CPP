/*
first step
1
222
33333
4444444
4444444
33333
222
1


1
2*3
4*5*6
7*8*9*10
7*8*9*10 --->i=4 -- space 6 start= 7
4*5*6 ---> i=5 --space 5 start= 4
2*3 --> i=6 --space 3 start= 2
1--> i=7 ---space 1 start= 1

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int flag;
    for (int i = 0, k = 1, a = 7, b = 4, c = 2, d = 1, m = 1; i < 8; i++)
    {
        flag = 0;
        for (int j = 1; j <= 7; j++)
        {
            if (i <= 3 && j <= 1 + (2 * i))
            {
                if (flag == 0)
                {
                    printf("%d ", m++);
                    flag = 1;
                }
                else
                {
                    printf("* ");
                    flag = 0;
                }
            }
            else if (i == 4)
            {
                if (flag == 0)
                {
                    printf("%d ", a++);
                    flag = 1;
                }
                else
                {
                    printf("* ");
                    flag = 0;
                }
            }
            else if (i >= 5 && j <= 7 - (2 * k))
            {

                if (flag == 0 && i == 5)
                {
                    printf("%d ", b++);
                    flag = 1;
                }
                else if (flag == 0 && i == 6)
                {
                    printf("%d ", c++);
                    flag = 1;
                }
                else if (flag == 0 && i == 7)
                {
                    printf("%d ", d++);
                    flag = 1;
                }
                else
                {
                    printf("* ");
                    flag = 0;
                }
            }
        }
        if (i >= 5)
        {
            k++;
        }
        printf("\n");
    }
    return 0;
}
