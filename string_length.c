#include<stdio.h>
#include<string.h>
int main(){
    int count =0;
    char name[50];
    printf("enter the name ");
    gets(name);
    count=strlen(name);
    printf("%d",count);
return 0;
}