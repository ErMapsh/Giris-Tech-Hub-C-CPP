/* 
    wap input three side of triangle and check is valid or
    not using conditional operatior

    concept : if angle of three side addition is 180 then is valid triangle

    a + b + c = 180

    algo: 

    1: input a, b, c
    2. addition of a, b and c 
    3. check is equal to 180 or not
    
*/

#include<stdio.h>

int main(){
    int a, b, c, sum = 0;
    
    printf("Enter a of angle: ");
    scanf("%d", &a);
    printf("Enter b of angle: ");
    scanf("%d", &b);
    printf("Enter c of angle: ");
    scanf("%d", &c);

    sum = a+b+c;
    // if((sum == 180 && a!=0 && b!=0 && c!=0)){
    //     printf("Valid trangle..");
    // }else{
    //     printf("Not valid Trangle");
    // }
    
    (sum == 180 && a!=0 && b!=0 && c!=0) ? printf("Valid trangle.."): printf("Not valid Trangle");
    return 0;
}