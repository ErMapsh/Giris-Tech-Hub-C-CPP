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
2*2
3*3*3
4*4*4*4
4*4*4*4
3*3*3 -->5 --space 5
2*2 -->6 --space 3
1-->7 ---space 1

*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int flag;
    for (int i = 0, k = 1, l = 3; i < 8; i++)
    {
        flag = 0;
        for (int j = 1; j <= 7; j++)
        {
            if (i <= 3 && j <= 1 + (2 * i))
            {
                if (flag == 0)
                {
                    printf("%d ", i + 1);
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
                    printf("%d ", i);
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
                if (flag == 0)
                {
                    printf("%d ", l);
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
            l--;
        }
        printf("\n");
    }
    return 0;
}
