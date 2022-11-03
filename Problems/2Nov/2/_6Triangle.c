/*
In geometry, an equilateral triangle is a triangle that has all its sides equal in length. Since the three sides are equal therefore the three angles, opposite to the equal sides, are equal in measure. Therefore, it is also called an equiangular triangle, where each angle measure 60 degrees.

An Isosceles triangle is a triangle that has two equal sides. Also, the two angles opposite the two equal sides are equal.
*/

#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter three side length: ");
    scanf("%d%d%d", &a, &b, &c);
    
    if((a == b) && (b == c) && (c == a)){
        printf("Equilateral triangle..\n");
    }else if((a == b)|| (b == c) || (c == a)){
        printf("Isosceles triangle..\n");
    }else{
        printf("Not a triangle...\n");
    }
    return 0;
}