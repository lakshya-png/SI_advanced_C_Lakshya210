#include<stdio.h>
int main(){
    int num1=12,num2=23,temp;
    temp=num1;
    num1=num2;
    num2=temp;
    printf("after swap the number is %d  %d",num1,num2);
}