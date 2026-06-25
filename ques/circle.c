#include<stdio.h>
int main(){
    int r;
    printf("Enter the radius of circle");
    scanf("%d",&r);
    float area,cir;
    area=3.14*r*r;
    cir=2*3.14*r;
    printf("The area of circle is %.2f and circumference is %.2f",area,cir);
}