#include<stdio.h>
int fibo(int n);
int main(){
    int n;
printf("enter the value of term");
scanf("%d",&n);

printf("term at %d is %d",n,fibo(n));
return 0;
}
int fibo(int n){
if(n==0 ){
return 0;
}
else if (n==1 || n==2){
return 1;
}
else{
return fibo(n-1)+fibo(n-2);

}

}
