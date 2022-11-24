#include <stdio.h>

int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if (age > 0 && age < 18)
    {
        printf("Children..\n");
    }
    else if (age >= 18 && age <= 35)
    {
        printf("Adult Person..\n");
    }
    else if (age > 35 && age <= 60)
    {
        printf("Adult Person..\n");
    }
    else
    {
        printf("Old Person..\n");
    }
    return 0;
}