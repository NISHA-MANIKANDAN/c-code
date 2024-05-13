#include <stdio.h>

// Function to check if an integer is within a given range
int in_range(int num, int lower, int upper) {
    return num < lower || num > upper;
}

int main() {
    int arr[] = {-1, -10, 8, 2};
    int arr_size = sizeof(arr) / sizeof(arr[0]);
    int lower_limit = 2;
    int upper_limit = 10;
    int invalid = 0;

    // Check if the array elements are within the given range
    for (int i = 0; i < arr_size; i++) {
        if (in_range(arr[i], lower_limit, upper_limit)) {
            printf("Invalid input: Array element %d is not within the range [%d, %d].\n", arr[i], lower_limit, upper_limit);
            invalid = 1;
            
        }
    }

    if (!invalid) {
        printf("All array elements are within the range [%d, %d].\n", lower_limit, upper_limit);
    }

    return 0;
}
