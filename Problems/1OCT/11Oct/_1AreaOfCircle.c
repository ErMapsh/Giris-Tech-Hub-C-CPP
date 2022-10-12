#include<stdio.h>
#include<math.h>

int main(){
    float radius, area;
    printf("Enter the Radius of circle: ");
    scanf("%f", &radius);
    area = M_PI *(radius * radius);
    printf("Area of circle: %f", area);
}