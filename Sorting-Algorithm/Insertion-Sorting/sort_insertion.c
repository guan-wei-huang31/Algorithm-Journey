#include <stdio.h>

void insertionSort(int arr[], int sz) {
    int i;
    if (arr == NULL || sz <= 0) {
        printf("Invalid array or size\n");
        return;
    }
    int position;
    int temp;
    for (i = 1; i < sz; i++) {
        position = i;
        while (position > 0 && arr[position - 1] > arr[position]) {
            temp = arr[position - 1];
            arr[position - 1] = arr[position];
            arr[position] = temp;
            position--;
        }
    }
}

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62};   
    int sz = sizeof(arr) / sizeof(arr[0]); 
    
    printf("Before sorting:\n");
    for (int i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    insertionSort(arr, sz);

    printf("After sorting:\n");
    for (int i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
