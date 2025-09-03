#include <stdio.h>

int main(){
    int arr[100], n, pos, i, num;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter the position where you want to insert the number: ");
    scanf("%d", &pos);

    if(pos < 0 || pos > n){
        printf("Invalid position!");
        return 1;
    }

    printf("Enter the number to be inserted: ");
    scanf("%d", &num);

    for(i = n; i > pos; i--){
        arr[i] = arr[i - 1];
    }

    arr[pos] = num;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}