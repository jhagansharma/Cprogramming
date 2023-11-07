#include<stdio.h>
int swap(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
return 0;
}
int main(){
int x=1;
int y=2; 
swap(&x,&y);
printf("%d%d",x,y);



return 0;
}