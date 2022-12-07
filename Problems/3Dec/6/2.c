#include<stdio.h>

int main(){
    int 
    // a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
     i, j, a[3][3], b[3][3];
    
    printf("----Enter the matrix value----\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter the value for a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    
    printf("\n----Transpose of matrix----\n");
    for (i = 0; i < 3; i++)
    {   
        for (j = 0; j < 3; j++)
        {   

            printf("%d\t", a[j][i]);
            b[i][j] = a[j][i];
        }
        printf("\n");
    }

    // ----Transpose of matrix array---
    printf("\nTranspose of matrix\n");
    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    return 0;
}
