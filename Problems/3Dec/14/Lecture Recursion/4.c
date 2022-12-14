#include <stdio.h>

int reverse(int x)
{
    static int rev = 0;
    int rem;
    if (x != 0)
    {
        // printf("%d\n", x);
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
    printf(n == reverse(n) ? "Palindrome" : "Not Palindrome");
    return 0;
}