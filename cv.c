#include <stdio.h>
int main(){
    int item;
    int rate;
    int quantity;
    printf("--------Welcome to the ammerican super market-------\n");
    printf("--------our products---------\n");
    printf("1.Apple\n2.Orange\n3.Banana\nTo select a item press the number");
scanf("%d",&item);
if (item ==1){
    printf("you are selected apple for rupees 110\n");
    rate=110;
}if (item ==2){
    printf("you are selected orange for rupees 90\n");
    rate=90;
}if (item ==3){
    printf("you are selected banana for rupees 70\n");
    rate=70;
}
printf("please select the quantity ");
scanf("%d",&quantity);
printf("total =%d",rate*quantity);



}