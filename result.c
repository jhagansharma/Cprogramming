#include<stdio.h>
int main(){
int phy,maths,chem;

printf("enter the marks of phy ");
scanf("%d",&phy);
printf("enter the marks of maths ");
scanf("%d",&maths);
printf("enter the marks of chem ");
scanf("%d",&chem);
float total = phy+chem+maths/3;

 if((total>40) && phy>33 && chem>33 && maths>33 ){
    printf("passed");
 }
else{
    printf("failed");
}
return 0;
}