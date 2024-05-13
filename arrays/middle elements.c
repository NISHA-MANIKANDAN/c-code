#include <stdio.h>

int findMiddleElement(int arr[], int n) {
    if (n % 2 == 0) {
        // If the array size is even, there are two middle elements
        int middleIndex1 = n / 2 - 1;
        int middleIndex2 = n / 2;
        return (arr[middleIndex1] + arr[middleIndex2]) / 2;
    } else {
        // If the array size is odd, there is a single middle element
        int middleIndex = n / 2;
        return arr[middleIndex];
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int middleElement = findMiddleElement(arr, n);
    printf("The middle element of the array is: %d\n", middleElement);

    return 0;
}
