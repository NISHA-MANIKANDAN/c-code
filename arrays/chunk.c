#include<stdio.h>

int main(){
   int arr[]= {3, 2, 8, 5,6,7,8};
   int size =sizeof(arr)/sizeof(arr[0]);
   int chunk=3;
   int chunktimes=size/chunk;
//   printf("%d",chunktimes);
int count=0;
   for(int i=0;i<size;i=i+chunk){
       if(count<chunktimes){
    
       printf("[");
       for(int j=i;j<chunk+i;j++){
          
                printf("%d,",arr[j]); 
           }
          
       
    //   num=num+chunk;
       printf("\b]");
       
       count++;
       }
     

}
}
