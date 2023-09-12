#include<stdio.h>
int fact(int n);
int main(){
int n = 0;
printf("the factorial of %d if %d",n,fact(n));

return 0;
}
int fact(int n){
if (n==1 || n==0){
    return 1;
}
else{
    return n * fact(n-1);
}
}