#include<stdio.h>
void merge(int arr1[],int size1,int arr2[],int size2,int merged[]){
   int j,i;
    

    for(int i=0;i<size1;i++){
      merged[i]=arr1[i];
        
    }
    for(i=0, j=size1 ; i<size2 ; i++ , j++){
       
        merged[j]=arr2[i];
        
    
        
    }
    
}
int main(){
   
    int size1,size2;
    scanf("%d",&size1);
    scanf("%d",&size2);
 int arr1[size1];
    int arr2[size2];
    int size = size1 +size2;
    int merged[size];
    for(int i=0;i<size1;i++){
        scanf("%d",&arr1[i]);
        
    }
    for(int i=0;i<size1;i++){
        scanf("%d",&arr2[i]);
        
    }
    merge(arr1,size1,arr2,size2,merged);
    for(int i=0;i<size;i++){
     printf("%d",merged[i]);
        
    } 
}
