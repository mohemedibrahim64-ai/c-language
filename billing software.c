#include <stdio.h>
int adds(int a,int b){
int s=a+b;
return s;
}
int main(){
    int a,b;
    printf("enter the first number");
    scanf("%d",&a);
    printf("enter the second number");
    scanf("%d",&b);
    int res=adds(a,b);
    printf("%d",res);
    
}




