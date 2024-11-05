#include <stdio.h>

void selectionSort(int arr[], int sz) {
    int i, j;
    if (arr == NULL || sz <= 0) {
        printf("Invalid array or size\n");
        return;
    }
    int minIndex;
    int temp;
    for (i = 0; i < sz-1; i++) {
        minIndex = i;
        for (j = i+1; j < sz; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // The key is to remember the minimum index and exchange the location with left one.
            }
        }
        temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    int arr[] = {64, 25, 12, 22, 11}; // Example array
    int sz = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    selectionSort(arr, sz);

    printf("Sorted array: ");
    for (int i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
