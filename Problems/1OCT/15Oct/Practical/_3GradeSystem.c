#include <stdio.h>

int main(int argc, char const *argv[])
{
    float percen, s1, s2, s3, s4, s5;

    printf("Enter subject 1 mark: ");
    scanf("%f", &s1); // getting input from users

    printf("Enter subject 2 mark: ");
    scanf("%f", &s2);

    printf("Enter subject 3 mark: ");
    scanf("%f", &s3);

    printf("Enter subject 4 mark: ");
    scanf("%f", &s4);

    printf("Enter subject 5 mark: ");
    scanf("%f", &s5);

    percen = (s1 + s2 + s3 + s4 + s5) * 100 / 500;
    printf("Percentage is %.2f\n", percen);


    // Grade System
    (percen <= 100 && percen >= 90) ? printf("Congratulations, Grade: A\n")
    :
    (percen <= 90 && percen >= 80) ? printf("Congratulations, Grade: B\n")
    :
    (percen <= 80 && percen >= 70) ? printf("Congratulations, Grade: C\n")
    :
    (percen <= 70 && percen >= 60) ? printf("Congratulations, Grade: D\n")
    :
    (percen <= 60 && percen >= 40) ? printf("Congratulations, Grade: E\n")
    :
    (percen < 40) ? printf("Grade: F\n"): printf("Something wrong, Try again\n");

    return 0;
}