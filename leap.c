#include<stdio.h>
int main(){
    int year;
    printf("enter the year");
    scanf("%d",&year);
if(year%4==0 ){
 printf("this is leap year");   
}
else if(year%400==0){
    printf("this is  a leap year");
}
else{
    printf("this not a leap year");
}

return 0;
}