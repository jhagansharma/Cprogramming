 #include<stdio.h>
#include<string.h>
int main(){
    
    char s1[50];
    char s2[50];
    printf("enter the s1 ");
    gets(s1);
     
   strcpy(s2,s1);
   strrev(s2);

   if(strcmp(s1,s2)==0){
    printf("string uis palindrome");
   }    
   else{
    printf("not palindrome");
   }
return 0;
}