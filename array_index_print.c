#include<stdio.h>
int main(){
int arr[10]={10,44,55,11,30,100,44,55,66,34};
for(int i=0;i<=9;i++){
    if(arr[i]<35){
    printf("%d ",i);
}
}

return 0;
}