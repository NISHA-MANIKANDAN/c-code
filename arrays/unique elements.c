#include <stdio.h>

#define MAX_SIZE 100 // Maximum size of the array

int main() {
    int arr[MAX_SIZE];
    int n, i, j, count;
    int unique[MAX_SIZE]; // Array to store unique elements
    int uniqueCount = 0; // Counter for unique elements

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find unique elements
    for (i = 0; i < n; i++) {
        count = 0;
        for (j = 0; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count == 1) {
            unique[uniqueCount++] = arr[i];
        }
    }

    // Print unique elements
    printf("Unique elements: ");
    for (i = 0; i < uniqueCount; i++) {
        printf("%d ", unique[i]);
    }
    printf("\n");

    return 0;
}
