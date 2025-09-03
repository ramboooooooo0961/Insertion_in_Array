#include <stdio.h>

int main(){
    int arr[100], num, i, n;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to be inserted at the start:");
    scanf("%d", &num);

    for(i = n; i > 0; i--){
        arr[i] = arr[i - 1];
    }

    arr[0] = num;
    i++;
    
    printf("Array after insertion: ");
    for(i = 0; i <= n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}