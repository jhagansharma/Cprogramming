#include<stdio.h>
void main(){

// with third elenment

// int x =22;
// int y =33;
// int temp;
// temp=x;
// x=y;
// y=temp;
// printf("after swaping x=%d , y=%d",x,y);

//  without third element

int x=2;
int y=3;

x=x+y;
y=x-y;
x=x-y;

printf("after swaping x=%d , y=%d",x,y);


}