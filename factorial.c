#include<stdio.h>
int main(){
// for loop 

// int n =3;
// int fact = 1;
// for(int i=1;i<=n;i++){
//     fact *= i;
// }
// printf("fact %d",fact);

// while loop


int i = 1;
int fact =1;

while(i<=3){
    fact*=i;
    i++;                                
}
printf("fact %d",fact);
return 0;
}