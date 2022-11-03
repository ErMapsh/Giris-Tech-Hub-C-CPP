#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int a = 8, b = -4, c = -2;
    float root1, root2, realNum, imagNum;
    int valueUndersqrRoot = pow(b, 2) - 4 * a * c;

    if (valueUndersqrRoot > 0)
    {
        root1 = (-b + sqrt(valueUndersqrRoot)) / (2 * a);
        root2 = (-b - sqrt(valueUndersqrRoot)) / (2 * a);
        printf("Root 1 is %.2f\n", root1);
        printf("Root 2 is %.2f\n", root2);
    }
    else if (valueUndersqrRoot == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    else
    {
        // complex number
        realNum = -b / (2 * a);
        imagNum = sqrt(valueUndersqrRoot) / (2 * a);
        printf("root1 = %.2f + %.2fi", realNum, imagNum);
        printf("root2 = %.2f -%.2fi", realNum, imagNum);
    }

    return 0;
}

/*
The quadratic formula helps us solve any quadratic equation. First, we bring the equation to the form ax²+bx+c=0, where a, b, and c are coefficients. Then, we plug these coefficients in the formula:

(-b±√(b²-4ac))
--------------- --> give two roots
    (2a).

*/
