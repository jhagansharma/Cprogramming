#include<stdio.h>
#include<string.h>
int main(){
    int count =0;
    char s1[50];
    char s2[50];
    printf("enter the name ");
    gets(s1);
   
    strcpy(s2,s1);
    printf("%s",s2);
return 0;
}