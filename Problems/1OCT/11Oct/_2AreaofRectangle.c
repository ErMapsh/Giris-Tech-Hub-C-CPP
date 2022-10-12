#include<stdio.h>

int main(){
    /*
        WAP to find a area of rectangle.
    */
    float w, l, area;// allocating memory for variable in ram
    printf("Enter the Width of Rectangle: ");
    scanf("%f", &w);// storing the value of w as float 
    printf("Enter the Length of Rectangle: ");
    scanf("%f", &l);
    area = w*l;
    printf("The area of rectangle is %.3f", area);
}

// WAP to input the basic salary of emplyee and calculate its total salary using a following terms.