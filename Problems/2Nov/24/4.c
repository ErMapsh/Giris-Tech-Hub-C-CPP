#include <stdio.h>

int main()
{

    int num, count = 1;
    num = 5;
    // printf("Enter a num: ");
    // scanf("%d", &num);


    for (int i = 1; i <= num; i++) // it will upto 1 to n as row
    {
        for (int j = 1; j <= i; j++)
        {
           printf("%d ", count++);
        }
        printf("\n");
    }
    return 0;
}

/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/