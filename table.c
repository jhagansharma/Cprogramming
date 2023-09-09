#include<stdio.h>
void main(){
//reverse order
// int n =10;
// for (int i = 10; i ; i--){

//     printf("%d x %d = %d\n", n,i,n*i);
// }
//forward order
// int n =10;
// for (int i = 1; i<=10 ; i++){

//     printf("%d x %d = %d\n", n,i,n*i);
// }

//sum of table
int n =10;
int sum =0;
for (int i = 1; i<=10 ; i++){

 printf("%d x %d = %d\n", n,i,n*i);
    sum += n*i;
   }
printf("sum %d",sum);





}