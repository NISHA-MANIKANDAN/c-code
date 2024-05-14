#include<stdio.h>

int main(){
   
    int size1,d;
    scanf("%d",&size1);
    
 int arr1[size1];
    
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
        
    }
   
   int seen[100]={0};
   for(int i=0;i<size1;i++){
     seen[arr1[i]]++;
      
        
    }
    int sum=0;
    
    for(int i=-0;i<size1;i++){
        if(seen[i]>1){
            
        }
        else
       sum +=arr1[i];
    }
    printf("%d",sum);
}
