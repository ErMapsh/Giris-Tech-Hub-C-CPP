#include <stdio.h>

int main()
{
    int M[3][3] = {{1, 2, 1}, {4, 0, 2}, {3, 5, 1}}, determinant;

    determinant = (M[0][0] * (M[1][1] * M[2][2] - M[2][1] * M[1][2])) - 
                  (M[0][1] * (M[1][0] * M[2][2] - M[2][0] * M[1][2])) +
                  (M[0][2] * (M[1][0] * M[2][1] - M[2][0] * M[1][1]));

    printf("Determinant is %d\n", determinant);
    return 0;
}