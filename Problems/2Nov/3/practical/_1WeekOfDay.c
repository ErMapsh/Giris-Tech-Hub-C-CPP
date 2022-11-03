#include <stdio.h>

int main()
{

    int day;
    printf("Enter the day number: ");
    scanf("%d", &day);

    switch (day)
    {
    default:
        printf("Invalid input\n");
        break;
    case 1:
        printf("Is Monday....\n");
        break;
    case 2:
        printf("Is Tuesday....\n");
        break;
    case 3:
        printf("Is Wednesday....\n");
        break;
    case 4:
        printf("Is Thursday....\n");
        break;
    case 5:
        printf("Is Friday....\n");
        break;
    case 6:
        printf("Is Saturday....\n");
        break;
    case 7:
        printf("Is Sunday....\n");
        break;
    }

    return 0;
}