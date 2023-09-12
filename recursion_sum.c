#include<stdio.h>
int sum(int n);
int main(){
int n;
    printf("enter the no of term");
    scanf("%d",&n);
    printf("the sun first %d term if %d",n,sum(n));

return 0;
}
int sum(int n){
    if(n<=1){
return 1;
    }
 return  n+sum(n-1);

}