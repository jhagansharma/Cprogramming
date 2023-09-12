#include<stdio.h>
void pattrn(int n);
int main(){
    int n=3;
    pattrn(n);
return 0;
}
void pattrn(int n){
    if (n==1) {
        printf("*\n");
        return;
    }
 pattrn(n-1);
for (int i = 0; i <(2*n-1); i++){
    printf("*");
}
printf("\n");


}