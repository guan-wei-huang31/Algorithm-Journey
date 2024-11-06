#include <stdio.h>
  
void bubbleSort(int arr[], int sz) {
    int i, j;
    if (arr == NULL || sz <= 0) {
        printf("Invalid array or size\n");
        return;
    }
    int temp, flag;
    for (i = 0; i < sz - 1; i++) {
        flag = 0;   // Reset flag at the start of each pass
        for (j = 0; j < sz - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap elements
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
                flag = 1;   // Mark that a swap occurred
            }
        }
        // If no swaps occurred, the array is sorted
        if (!flag) {
            break;
        }
    }
}

void printArray(int arr[], int sz) {
    for (int i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int sz = sizeof(arr) / sizeof(arr[0]);

    printf("Original array:\n");
    printArray(arr, sz);

    bubbleSort(arr, sz);

    printf("Sorted array:\n");
    printArray(arr, sz);

    return 0;
}
