#include <stdio.h>
#include <math.h>

int main()
{
    int num, len = 0, temp, temp2, rev = 0, rem;
    printf("Enter number: ");
    scanf("%d", &num);
    temp = temp2 = num;

    // finding length of digit
    do
    {
        len++;
        temp /= 10;
    } while (temp != 0);
    printf("Length of num is %d\n", len);

    int logic = pow(10, len - 1);
    // printf("%d", logic);

    // lets rev the number
    int i = 0;
    do
    {
        i++;
        rem = temp2 % 10;
        rev += rem * logic;
        temp2 /= 10;
        logic /= 10;
    } while (i <= len);

    // lets compare
    if (num == rev)
    {
        printf("Yes palindrome\n");
    }
    else
    {
        printf("Not palindrome\n");
    }
    return 0;
}