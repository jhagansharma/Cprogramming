#include<stdio.h>
int main(){
   int arr[7]={1,2,3,4,5,6,7};
   int x=1;
   int indx=0;
   int flag=0;  //not present
for(int i=0;i<7;i++){
    if(arr[i]==x){
       flag=1;
      indx=i;
        break;
    }
  }
if(flag==1){
    printf("present in array and index is %d",indx);

}
else{
    printf("not present in array");
}
return 0;
}