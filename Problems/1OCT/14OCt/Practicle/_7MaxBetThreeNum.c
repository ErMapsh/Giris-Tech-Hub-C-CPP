#include<stdio.h>
#include<limits.h>

int main(int argc, char const *argv[])
{
    printf("Max int size is %d\n", INT_MAX); // getting size
    printf("Min int size is %d\n", INT_MIN); 

    printf("------Max between Three Number------\n");
    int a, b, c, max= 0;
   
    printf("Enter a: ");
    scanf("%d", &a); // getting first input

    printf("Enter b: ");
    scanf("%d", &b);// getting second input

    printf("Enter c: ");
    scanf("%d", &c);// getting third input

    // basic human logic
    max = (a < b) == 1? b: a; // max jo hoga greater hoga
    max = (max < c) == 1? c: max; // comparing our max to c

    printf("Maximum number is %d\n", max);

    return 0;
}



/*
 // basic human logic
    if(a<b){
        max = b;
    }else{
        max = a;
    }

    if(max<c){
        max = c;
    }
*/