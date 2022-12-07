#include<stdio.h>

int main(){
    int a[3][3] = {{2, 3, 5}, {4, 9, 1}, {8, 6, 7}}, b[3][3]={{10, 1, 3}, {5, 13, 2}, {7, 4, 9}}, i , j, k,c[3][3], sum = 0;

    printf("Given Matrix A: \n");
    for ( i= 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");      
    }

    printf("\nGiven Matrix B: \n");
    for ( i= 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");      
    }

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {   
            sum = 0;
            for ( k = 0; k < 3; k++)
            {
               sum += a[i][k] * b[k][j];  
            }
            // printf("Sum is %d\t", sum);
            c[i][j] = sum;
        }
    }


    /*
        |2, 3, 5|  |10, 1, 3|
        |4, 9, 1|  |5, 13, 2|
        |8, 6, 7|  |7, 4,  9|
    */

    printf("\n---Multiplication of matrix---:\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}