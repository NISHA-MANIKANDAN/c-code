#include<stdio.h>
void rotate(int arr1[],int size1,int d){
  int temp[d];

    for(int i=0;i<d;i++){
      temp[i]=arr1[i];
        
    }
    for(int i=d;i<size1;i++){
     arr1[i-d]=arr1[i];
        
    }
    for(int i=0;i<d;i++){
        arr1[size1-d+i]=temp[i];
    }
   
    
}
int main(){
   
    int size1,d;
    scanf("%d",&size1);
    scanf("%d",&d);
 int arr1[size1];
    
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
        
    }
    
    rotate(arr1,size1,d);
    for(int i=0;i<size1;i++){
     printf("%d",arr1[i]);
        
    } 
}
