#include<stdio.h>
int main(){
    int num1=12,num2=45;
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("after swap the number is %d  %d",num1,num2);
}