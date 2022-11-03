#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);

    if (age > 18)
    {
       printf("You are eligible for voting and driving licence\n");
    }else{
        printf("You are not eligible for voting and driving licence\n");
    }
    
    return 0;
}