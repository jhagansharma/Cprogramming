#include<stdio.h>
int main(){
int count=0;
int x=4;
int arr[7]={11,12,13,4,15,6,17};
for(int i=0;i<7;i++){
    if(arr[i]>x){
      count=count+1;
    }
   }
    printf("%d ",count);

    
    // for(int i=0;i<7;i++){
    //        printf("%d ",arr[i]);
    // }
return 0;
}