#include<stdio.h>

int main(){ 
    int num, i = 1;
    printf("Enter your number: ");
    scanf("%d", &num);

    // only factors of number
    do
    {
       if(num % i == 0){
        printf("%d ", i);
       }
       i++;
    } while (i<num);
    

    return 0;
}