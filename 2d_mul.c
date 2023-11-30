#include<stdio.h>
int main(){
int a[2][2];
int b[2][2];
int c[2][2],k;
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
      c[i][j]=0;
      for (int k=0;k<2;k++){
      c[i][j]+=a[i][k]*b[k][j];
      }
    }
}
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
printf("%d ",c[i][j]);
    }
    printf("\n");
}

return 0;
}