#include <stdio.h>
#include <stdlib.h>

void Display(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(ptr + i));
    }
}

int *CreateArray(int size)
{
    int *ptr;
    ptr = (int *)calloc(size, sizeof(int));
    return ptr;
}

int *SetupArray(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Enter value for index %d : ", i);
        scanf("%d", ptr + i);
    }
    return ptr;
}

int FindNeg(int *ptr, int size){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if(*(ptr+i)<0){
            count++;
        }
    }
    return count;
}

int main(){

    int size, *ptr;
    printf("Enter the size of array: ");
    scanf("%d", &size);

    ptr = CreateArray(size);
    ptr = SetupArray(ptr, size);

    printf("\nArray is: ");
    Display(ptr, size);

    printf("\nNegative values are: %d", FindNeg(ptr, size));
    return 0;
}
