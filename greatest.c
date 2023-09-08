#include<stdio.h>
int main(){
    int a,b,c,d;
printf("enter the value of four number");
scanf("%d%d%d%d",&a,&b,&c,&d);

if (a>b && a>c && a>d)
{
    printf("a is greatest");
}
else if (b>c && b<d)
{
    printf("b is greatest");
}
else if (c>d)
{
    printf("c is greatest");
}
else{
    printf("d is greatest");
}

return 0;
}