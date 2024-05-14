// Given an array arr[] of size N. 
// The task is to find the sum of the contiguous subarray within a arr[] with the largest sum. 
// Example: Input: arr = {-2,-3,4,-1,-2,1,5,-3} Output: 7 Explanation: The subarray {4,-1, -2, 1, 5} has the largest sum 7. 
// Input: arr = {2} Output: 2 Explanation: The subarray {2} has the largest sum 1.
    
#include<stdio.h>
int main()
{
    int arr[]={-2,-3,-4,-1,-2,-1,-5,-3};
    int max=arr[0];
    int sum;
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+arr[j];
            if(sum>max)
            {
                max=sum;
            }
        }
    }
    printf("%d",max);
