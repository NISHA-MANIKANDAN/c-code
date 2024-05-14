// Given an array arr[] of size N. 
// The task is to find the sum of the contiguous subarray within a arr[] with the largest sum. 
// Example: Input: arr = {-2,-3,4,-1,-2,1,5,-3} Output: 7 Explanation: The subarray {4,-1, -2, 1, 5} has the largest sum 7. 
// Input: arr = {2} Output: 2 Explanation: The subarray {2} has the largest sum 1.
    
#include <stdio.h>

int maxSubarraySum(int arr[], int n) {
    int max_sum = arr[0]; // Initialize max_sum with the first element of the array
    int current_sum = arr[0]; // Initialize current_sum with the first element of the array

    for (int i = 1; i < n; i++) {
        // Update current_sum to be the maximum of the current element or
        // the sum of the current element and the previous current_sum
        current_sum = (arr[i] > current_sum + arr[i]) ? arr[i] : current_sum + arr[i];

        // Update max_sum to be the maximum of max_sum and current_sum
        max_sum = (max_sum > current_sum) ? max_sum : current_sum;
    }

    return max_sum;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_sum = maxSubarraySum(arr, n);
    printf("The maximum sum of a contiguous subarray is: %d\n", max_sum);

    return 0;
}
