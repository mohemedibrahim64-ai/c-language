#include <stdio.h>
int main(){
    char section;
    int year;
    int age;
    printf ("enter your section\n");
    scanf(" %c",&section);
    printf("enter your year\n");
    scanf("%d",&year);
    printf("enter your age\n");
    scanf("%d",&age);
    printf("your section is:%C\n",section);
    printf("your year is:%d\n",year);
    printf("your age is:%d\n",age);
return 0;
}