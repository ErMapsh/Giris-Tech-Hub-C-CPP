/*
    wap input 6 subject marks and calculate its percentage\

    algo =
    1. Get input form user 
    
    2. calculate addition of subject marks
    (50 + 80 + 97+ 83+ 75 + 81* 100) / 600 

    3. print    

*/

#include<stdio.h>

int main(){ 
    int a1, a2, a3, a4, a5, a6, add;
    float Percen;
    printf("Enter subject1 marks: ");
    scanf("%d", &a1);
    printf("Enter subject2 marks: ");
    scanf("%d", &a2);
    printf("Enter subject3 marks: ");
    scanf("%d", &a3);
    printf("Enter subject4 marks: ");
    scanf("%d", &a4);
    printf("Enter subject5 marks: ");
    scanf("%d", &a5);
    printf("Enter subject6 marks: ");
    scanf("%d", &a6);

    add = a1 + a2 + a3+ a4 + a5+ a6;
    Percen = add*100/600;
    printf("The percetage of marks is %.2f\n", Percen);

    return 0;
}