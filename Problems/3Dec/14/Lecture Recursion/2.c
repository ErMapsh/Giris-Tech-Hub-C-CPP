#include <stdio.h>

int reverse(int x)
{
    static int rev = 0;
    int rem;
    if (x != 0)
    {   
        printf("%d\n", x);
        rem = x % 10;
        rev = (rev * 10) + rem;
        x /= 10;
        reverse(x);
    }
    return rev;
}

int main()
{   
    int n, result;
    printf("Enter the number: ");
    scanf("%d", &n);  
    printf("%d = %d", n , reverse(n));
    return 0;
}