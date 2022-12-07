#include<stdio.h>

int main(){

    int a[3][3] = {{1, 2, 3}, {1, 2, 3}, {1, 2, 3}}, b[3][3], i, j, k, sum;

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {       
            sum = 0;
            for ( k = 0; k < 3; k++)
            {
                sum += a[i][k] * a[k][j];
            }
            b[i][j] = sum;
        }
    }

    printf("-------Output-----\n");
    for (i = 0; i < 3; i++)
    {   
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}