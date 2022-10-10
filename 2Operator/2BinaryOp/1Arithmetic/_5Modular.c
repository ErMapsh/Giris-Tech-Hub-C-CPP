#include<stdio.h>
#include<math.h>

int withInBuildFmod(float a, float b);

int withTypeCasting(float a, float b);


int main(int argc, char const *argv[])
{
    int a = 14, b = 4; // declaration with initialization of var
    printf("Reminder is %d\n", a%b);

    printf("---Working with floating values----\n");
    withInBuildFmod(40.2f, 2.2f);
    withTypeCasting(40.2f, 2.2f);
    return 0;
}


int withInBuildFmod(float a, float b){
    float c;
    c = fmod(a, b);
    printf("modular is %f\n", c);
    return c;
}

int withTypeCasting(float a, float b){
    float c;
    
    c = (int) a % (int) b;
    
    printf("modular is %f\n", c);
    return 0;
}