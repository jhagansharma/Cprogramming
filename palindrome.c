#include<stdio.h>
int main(){

int s=0,r,n=11;
int temp = n;
while(n>0){
r=n%10;
s=r+(s*10);
n=n/10;
}
if (temp==s){
    printf("palindrome");
}
else{
    printf("not palidrome");
}
return 0;
}