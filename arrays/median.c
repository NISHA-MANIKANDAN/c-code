#include <stdio.h>
#include <stdlib.h>



// Function to sort the array using bubble sort
void sort(int num[], int n) {
    for (int i = 0; i < n; ++i){
      for (int j = i + 1; j < n; ++j){
         if (num[i] > num[j]){
            int a = num[i];
            num[i] = num[j];
            num[j] = a;
         }
      }
   }
}

// Function to print the median
void printMedian(int arr[], int n) {
    // Sort the array
    sort(arr, n);

    // Find the median
    int median;
    if (n % 2 == 0) {
        // If the length is even, median is the average of the two middle values
        median = (arr[n/2 - 1] + arr[n/2]) / 2;
    } else {
        // If the length is odd, median is the middle value
        median = arr[n/2];
    }

    // Print the median
    printf("The median of the array is: %d\n", median);
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    printMedian(arr, n);

    return 0;
}
