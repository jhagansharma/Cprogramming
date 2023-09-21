#include<stdio.h>
int main(){
int n =154;
int r,sum=0;
int temp = n;
while(n>0){

r=n%10;
sum=(r*r*r)+sum;
n=n/10;
}
if (sum==temp)
{
    printf("armstrong no ");
}
else{
    printf("not a armstrong");
}
return 0;
}