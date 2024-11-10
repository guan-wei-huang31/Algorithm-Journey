#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int jumpSearch(int arr[], int tar, int sz) {
    int step = sqrt(sz);
    int prev = 0;

    while (arr[step] < tar && step < sz) {
        prev = step;
        step += sqrt(sz);
        if (prev >= sz) {
            return -1;
        }
    }

    while (arr[prev] < tar) {
        prev++;
        if (prev == step || prev >= sz) {
            return -1;
        }
    }

    if (arr[prev] == tar) {
        return prev;
    }

    return -1;
}

int main() {
    int arr[] = {3, 5, 7, 9, 12, 15, 18, 20, 24, 30};
    int sz = sizeof(arr) / sizeof(arr[0]);
    int target = 15;

    qsort(arr, sz, sizeof(int), compare);

    int result = jumpSearch(arr, target, sz);

    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}
