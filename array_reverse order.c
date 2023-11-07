#include<stdio.h>
int main(){
   int arr[5];
            int i;
   for(i=0;i<=4;i++){
    printf("enter the value of %d element",i+1);
    scanf("%d",&arr[i]);
    }
    for(int i=4;i>=0;i--){
        printf("%d",arr[i]);
    }
   return 0;
} 