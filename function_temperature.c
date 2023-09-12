#include<stdio.h>
float temp(float c);
int main(){
    float c;
    printf("enter the value of celcius");
    scanf("%f",&c);
    printf("temp in faheranie is %f",temp(c));
return 0;
}

float temp(float c){
float result =((c * 9)/5) + 32;
return result;

}