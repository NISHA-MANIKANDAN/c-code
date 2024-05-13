#include <stdio.h>

void printLeaders(int arr[], int n) {
    int max_from_right = arr[n - 1];
    printf("Leaders in the array: %d ", max_from_right);

    for (int i = n - 2; i >= 0; i--) {
        if (arr[i] > max_from_right) {
            max_from_right = arr[i];
            printf("%d ", max_from_right);
        }
    }
    printf("\n");
}

int main() {
    int arr[] = {16, 17, 4, 3, 5, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    printLeaders(arr, n);

    return 0;
}
