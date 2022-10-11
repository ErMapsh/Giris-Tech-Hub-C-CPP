/* WAP to input the basic salary of emplyee and calculate its total salary using a following terms.
    if bs = 1000 
    da = 300 is 30%
    hra = 300 is 30%
    and calulate the total salary = bs + da + hra;
*/

#include<stdio.h>

int main(){
    long int totalSalary, bs, da, hra;
    // some time salary is not between int ie.400000, so need to use long int

    printf("Enter the total Salary: ");
    scanf("%ld", &bs);

    // lets find da and hra 
    /*
         x                          30*1000
        ---- * 100 = 30%  ---> x = -------- = 300
        1000                         100
    */

    da = (30 * 1000)/100;
    hra = (30 * 1000)/100;
    totalSalary = bs + da + hra;
    printf("Total salary is %ld.\n", totalSalary);
}