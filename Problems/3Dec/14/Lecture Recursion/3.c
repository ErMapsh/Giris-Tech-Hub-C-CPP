#include <stdio.h>

int reverse(int x)
{
    static int count = 0;
    if (x != 0)
    {  
        count++;
        x /= 10;
        reverse(x);
    }
    return count;
}

int main()
{   
    int n, result;
    printf("Enter the number: ");
    scanf("%d", &n);  
    printf("%d = %d", n , reverse(n));
    return 0;
}