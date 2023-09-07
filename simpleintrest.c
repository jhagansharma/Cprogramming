#include<stdio.h>
int main(){
    int principle,time;
    float rate;
printf("enter the value of principle ");
scanf("%d",&principle);
printf("enter the value of time ");
scanf("%d",&time);
printf("enter the value of rate ");
scanf("%f",&rate);

printf("simple intrest is: %f",(principle*rate*time)/100);


return 0;
}