//calculater using two digits  
#include <stdio.h>
int main (){
int num1;
int num2;
char v;
printf("enter your first num\t");
scanf("%d",&num1);
printf("enter yor second num\t");
scanf("%d",&num2);
printf("select your character(+,-,*,/)\t");
scanf(" %c",&v);
if (v=='+'){
    printf("result=%d",num1+num2);
}if (v=='-'){
    printf("result=%d",num1-num2);
}if (v=='*'){
    printf("result=%d",num1*num2);
}if (v=='/'){
    printf("result=d",num1/num2);
}
return 0;


}