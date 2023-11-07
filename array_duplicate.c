#include<stdio.h>
int main(){
    int arr[7]={1,2,5,5,5,6,7};

for(int i=0;i<7;i++){
    for(int j=i+1;j<7;j++){
        if(arr[i]==arr[j]){
            printf("dupocate is present\n");
        }
    }
}

return 0;
}