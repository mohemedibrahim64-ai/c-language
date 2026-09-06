#include <stdio.h>
int main(){
    int time;
    printf("welcome to the day\n");
    scanf("%d",&time);
    if (time<=11){
        printf("very good morning");

    }
    if(time >=12){
        printf("good after noon");
    }
    if (time =6){
        printf("good evening");

    }
    else {
        printf("good night");
    }
}