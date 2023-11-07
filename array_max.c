#include<stdio.h>
#include<limits.h>
int main(){
    int arr[5]={11111,2,3099,44,15};
    int max=INT_MIN;

for(int i=0;i<5;i++){
    if(arr[i]>max){
        max=arr[i];
      
    }
}
printf("%d",max);


return 0;
}