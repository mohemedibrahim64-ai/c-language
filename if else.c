#include <stdio.h>
int main(){
    int time;
printf("enter the time according to ist:");
    scanf("%d",&time);
    if (time >=1&& time<=5){
        printf ("its early morning");
    }
    else if (time >=6&&time <=11)
    {
        printf("good morning ");
    }
    else if(time>=12&&time<16){
        printf("good afternoon");
    }
    else if(time>=16&&time<=18){
        printf ("good evening");
    }
    else{
        printf("good night");
    }
    
}
