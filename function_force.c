#include<stdio.h>
float force(int mass);
int main(){
    int m;
printf("enter the value of mass ");
scanf("%d",&m);
printf("the value of force if %f",force(m));


return 0;
}
float force(int mass){
    float result= mass * 9.8;
return result;


}