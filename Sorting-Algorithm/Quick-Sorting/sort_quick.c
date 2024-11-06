#include <stdio.h>

int divide(int subarr[], int low, int high) {
    int pivot = subarr[low];
    int startIndex = low + 1; 
    int endIndex = high;
    int temp;

    while (startIndex <= endIndex) {

        while (startIndex <= endIndex && subarr[startIndex] <= pivot) {
            startIndex++;
        }

        while (startIndex <= endIndex && subarr[endIndex] >= pivot) {
            endIndex--;
        }

        if (startIndex < endIndex) {
            temp = subarr[startIndex];
            subarr[startIndex] = subarr[endIndex];
            subarr[endIndex] = temp;
        }
    }

    subarr[low] = subarr[endIndex];
    subarr[endIndex] = pivot;
    return endIndex;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pivotIndex = divide(arr, low, high);
        quickSort(arr, low, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, high);
    }
}

void printArray(int array[], int size) {
    int i;
    printf("[ ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("]\n");
}

int main() {
    int arr[] = {29, 10, 14, 37, 13};
    int size = sizeof(arr) / sizeof(arr[0]);

    std::cout << "Original array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    quickSort(arr, 0, size - 1);

    std::cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
