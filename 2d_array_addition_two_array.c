#include<stdio.h>
int main(){
int a[2][2];
int b[2][2];
int rs[2][2];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("enter the value of firdt array");
        scanf("%d",&a[i][j]);
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("enter the element of second array");
        scanf("%d ",&b[i][j]);
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
     rs[i][j]=a[i][j]+b[i][j];
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        printf("%d ",rs[i][j]);
    }
    printf("\n");
}
return 0;
}