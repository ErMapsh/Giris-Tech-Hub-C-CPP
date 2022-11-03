#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Enter three Angle of side: ");
    scanf("%d%d%d", &a, &b, &c);

    if((a+b+c) == 180){
        printf("Triangle...\n");
    }else{
        printf("Not Trianle..\n");
    }

    return 0;
}