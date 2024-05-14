#include<stdio.h>

int main(){
   
    int size1,d;
    scanf("%d",&size1);
    scanf("%d",&d);
 int arr1[size1];
    
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
        
    }
    
    while(d!=0){
    int temp= arr1[size1-1];
    for(int i =size1-2;i>=0;i--){
        arr1[i+1]=arr1[i];
    }
    arr1[0]=temp;
    d--;
    }
    for(int i=0;i<size1;i++){
        printf("%d",arr1[i]);
        
    }
}
