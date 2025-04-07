#include <stdio.h>

void rotateArray(int arr[], int n, int d) {
    int temp[d];
    for (int i = 0; i < d; i++) {
        temp[i] = arr[n - d + i];
    }
    for (int i = n - d - 1; i >= 0; i--) {
        arr[i + d] = arr[i];
    }
    for (int i = 0; i < d; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int n = 5;
    int d = 2;
    int arr[] = {1, 2, 3, 4, 5};
    printf("Original Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    rotateArray(arr, n, d);
    printf("Rotated Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
