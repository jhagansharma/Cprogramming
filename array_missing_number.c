#include<stdio.h>
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int sum =0;
    int sum1=55;
    for(int i=0;i<9;i++){
        sum = sum +arr[i];
    }
    printf("the missing element is %d",sum1-sum);
return 0;
}