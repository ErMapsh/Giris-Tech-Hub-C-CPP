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

int *MergeArray(int *ptr, int *ptr1, int size, int size1)
{
    int *ptr3;
    ptr3 = (int *)calloc((size1 + size), sizeof(int));

    for (int i = 0; i < size; i++)
    {
        *(ptr3 + i) = *(ptr + i);
        *(ptr3 + (size + i)) = *(ptr1 + i);
    }
    return ptr3;
}

int *Descending(int *ptr, int size){
    int temp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i+1; j < size - 1 ; j++)
        {
            if(*(ptr+i) < *(ptr + (j+1))){
                temp = *(ptr + i);
                *(ptr + i) = *(ptr + (j+1));
                *(ptr + (j+1)) = temp;
            }
        }   
    }
    
    return ptr;
}
int main()
{

    int *ptr1, *ptr, size, size1, *ptr3;

    printf("Enter size of first array: ");
    scanf("%d", &size);
    printf("Enter size of Second array: ");
    scanf("%d", &size1);

    ptr = CreateArray(size);
    ptr1 = CreateArray(size1);

    printf("\nEnter value for A: ");
    ptr = SetupArray(ptr, size);
    printf("\nEnter value for B: ");
    ptr1 = SetupArray(ptr1, size1);

    ptr3 = MergeArray(ptr, ptr1, size, size1);
    printf("\nAfter merging: ");
    Display(ptr3, (size+size1));
    
    printf("\nAfter Descending: ");
    ptr3 = Descending(ptr3, (size+size1));
    Display(ptr3, (size+size1));

    return 0;
}