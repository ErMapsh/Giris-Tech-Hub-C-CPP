#include<stdio.h>
int main(int argc, char const *argv[])
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    age = (age > 0 && age < 18)?0: (age>=18 && age <=60)?1:age>60? 2:3;

    switch (age)
    {
    case 0:
        printf("You child..\n");
        break;
    case 1:
        printf("You Adult..\n");
        break;
    case 2:
        printf("You Older..\n");
        break;
    
    // value 3 automatically passed to default..
    default:
        printf("value should not negative..\n");
        break;
    }
    return 0;
}