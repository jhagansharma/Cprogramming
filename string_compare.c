 #include<stdio.h>
#include<string.h>
int main(){
    
    char s1[50];
    char s2[50];
    printf("enter the s1 ");
    gets(s1);
    
    printf("enter the s2 ");
    gets(s2);
    if(strcmp(s1,s2)==0){
        printf("equal string");
    }
    else if(strcmp(s1,s2)>0){
        printf("first string is greater");
    }
    else{
        printf("second string is greater");
    }
    
return 0;
}