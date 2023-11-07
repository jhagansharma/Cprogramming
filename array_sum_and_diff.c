#include<stdio.h>
int main(){
int sum=0;
int sum1=0;
int arr[8]={1,2,3,4,5,6,7};
for(int i=0;i<7;i++){
    if(i%2==0){
      sum=sum+arr[i];
    }
    else{
        sum1=sum1+arr[i];  
    }
}
    int res =sum-sum1;
    printf("%d",res);
return 0;
}