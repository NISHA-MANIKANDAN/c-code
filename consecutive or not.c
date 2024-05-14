//if the number is consecutive then add ->Sample input:1 2 3 5 6 7 9
// Sample output:1->3,5->7,9

#include <stdio.h>

int main() {
    int size;

    // Get the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Get the elements of the array
    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Print consecutive sequences
    printf("Consecutive sequences: ");
    int start = arr[0]; // Initialize start of the sequence
    for (int i = 0; i < size; i++) {
        // Check if the current element is consecutive with the previous one
        if (i == size - 1 || arr[i] + 1 != arr[i + 1]) {
            if (start == arr[i]) {
                printf("%d", start);
            } else {
                printf("->%d", arr[i]);
            }
            if (i != size - 1) {
                printf(", ");
            }
            // Update start for the next sequence
            if (i != size - 1) {
                start = arr[i + 1];
            }
        }
    }
    printf("\n");

    return 0;
}
