#include <stdio.h>
#include <math.h>

int diameter(int);
float circumference(int r);
float area(int r);

int main()
{
    int choice, radius;
    printf("Enter the value : ");
    scanf("%d", &radius);

    printf("1.diameter\n2.circumference\n3.area of circle\nEnter the choice: ");
    scanf("%d", &choice);


    switch (choice)
    {
    case 1:

        printf("Diameter is = %d\n", diameter(radius));
        break;
    case 2:

        printf("circumference is = %.2f\n", circumference(radius));
        break;
    case 3:
        printf("area is = %2.f\n", area(radius));
        break;
    default:
        printf("Invalid choice...\n");
        break;
    }
    return 0;
}

int diameter(int r)
{
    return r * 2;
}

float circumference(int r)
{
    return 2 * M_PI * r;
}

float area(int r)
{
    return M_PI * (r * r);
}