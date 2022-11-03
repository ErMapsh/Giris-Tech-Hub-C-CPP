#include <stdio.h>

int main()
{

    int xx, yy;
    printf("Enter xx: ");
    scanf("%d", &xx);
    printf("Enter yy: ");
    scanf("%d", &yy);

    if (xx <= 100 && yy <= 100)
    {
        if (xx < yy)
        {
            printf("Chef want to increase Volume by %d\n", yy - xx);
        }
        else
        {
            printf("Chef want to Decrease Volume by %d\n", xx - yy);
        }
    }
    else
    {
        printf("Invalid...\n");
    }

    return 0;
}