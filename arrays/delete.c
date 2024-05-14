#include<stdio.h>

int main(){
   
    int size,d;
    scanf("%d",&size);
    scanf("%d",&d);
 int arr[size];
    
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
        
    }
   
  
   for(int i=0;i<d;i++){
       printf("%d",arr[i]);
   }
     for(int i=d+1;i<size;i++){
       printf("%d",arr[i]);
   }
}
