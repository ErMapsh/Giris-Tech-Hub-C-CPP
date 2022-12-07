#include<stdio.h>

int main()
{
    int a[3][3] = {{5, 10, 8}, 
    {12, 3, 25}, {1, 6, 9}}, midCol = 0 , midRow = 0;

    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            if(i >= 0  &&  j == 1){
                midCol += a[i][j];
            }   

            if(i == 1 && j>=0){
                midRow += a[i][j];
            } 
        }
    }


    printf("MidRow = %d\nMidCol = %d\n", midRow, midCol);
    
    return 0;
}