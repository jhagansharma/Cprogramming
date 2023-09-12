#include<stdio.h>

float avg(int a,int b, int c);

int main(){
    int a,b,c;
printf("enter the value of a");
scanf("%d",&a);
printf("enter the value of b");
scanf("%d",&b);
printf("enter the value of c");
scanf("%d",&c);
int result;
printf("the avg of %d %d and %d  is %f",a,b,c,avg(a,b,c));

return 0;
}

float avg(int a,int b, int c){
float result;
result=(a+b+c)/3;
return result;
}