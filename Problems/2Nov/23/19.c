#include<stdio.h>
#include<math.h>

int main(){
    // 19. Write a C program to enter a number and print it in words
    long num, temp, rev = 0;
    printf("Enter a number: ");
    scanf("%ld", &num);
    temp = num;

    // fisrt we have to reverse the number
    int len = 0, rem;
    while (temp != 0)
    {
        len++;
        temp /= 10;
    }
    temp = num;
    // printf("%d\n", len);

    int long logic10 = pow(10, len-1);
    while (temp != 0)
    {
        rem = temp % 10;
        rev += rem*logic10;

        temp /= 10;
        logic10 /= 10;
    }
    temp = rev;
    // printf("Reverse number : %ld", rev);

    while (temp != 0)
    {
        rem = temp % 10;
        switch (rem)
        {
        case 0:
            printf("Zero\t");
            break;
        case 1:
            printf("One\t");
            break;
        case 2:
            printf("Two\t");
            break;
        case 3:
            printf("Three\t");
            break;
        case 4:
            printf("Four\t");
            break;
        case 5:
            printf("Five\t");
            break;
        case 6:
            printf("Six\t");
            break;
        case 7:
            printf("Seven\t");
            break;
        case 8:
            printf("Eight\t");
            break;
        case 9:
            printf("Nine\t");
            break;
        
        }

        temp /= 10;
    }
    
    
    
    return 0;
}