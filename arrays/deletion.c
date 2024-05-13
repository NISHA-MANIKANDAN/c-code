#include <stdio.h>

void deleteElement(int arr[], int *n, int pos) {
    // Check if the position is valid
    if (pos < 0 || pos >= *n) {
        printf("Invalid position!\n");
        return;
    }

    // Shift all elements after the position towards the left
    for (int i = pos; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Decrement the size of the array
    (*n)--;

    printf("Element at position %d has been deleted.\n", pos);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    deleteElement(arr, &n, 2);  // Delete element at position 2

    printf("Modified array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
