#include<stdio.h>
#include<math.h>

int main(){

    // int arr[5] = {2, 3, 4, 5, 6};
    int arr[5];
    for(int i = 0; i<5 ; i++){
        printf("Enter your %d number: ", i);
        scanf("%d", &arr[i]);
    }

    for (int j = 0; j < 5; j++)
    {
        printf("%d = %d\n", arr[j], arr[j] * arr[j]);
    }
    
    return 0;
}