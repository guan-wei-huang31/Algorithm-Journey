#include <stdio.h>

int linearSearch(int arr[], int tar, int sz) {
    int i;
    for (i = 0; i < sz; i++) {
        if (arr[i] == tar) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {34, 7, 23, 32, 5, 62};   
    int sz = sizeof(arr) / sizeof(arr[0]); 
    int target = 23;                       
    int result;

    printf("Array:\n");
    for (int i = 0; i < sz; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    result = linearSearch(arr, target, sz);

    if (result != -1) {
        printf("Target %d found at index %d\n", target, result);
    } else {
        printf("Target %d not found in the array\n", target);
    }

    return 0;
}
