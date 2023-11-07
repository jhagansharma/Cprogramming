#include<stdio.h>
int main(){
int n,i;
int arr[n];
printf("enter the size of array");
scanf("%d",&n);

for(i=0;i<=n-1;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<=n-1;i++){
    printf("%d",&arr[i]);
}



return 0;
}