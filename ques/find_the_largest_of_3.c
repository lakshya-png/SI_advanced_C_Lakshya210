#include<stdio.h>
int main(){
    int num1=1,num2=3,num3=5;
    if(num1>num2&&num1>num3){
        printf("the largest number is num1(%d)",num1);
    }
    else if (num2>num1&&num2>num3)
    {
        printf("the largest number is num2 (%d)",num2);

    }
    else{
        printf("the largest number is num3(%d)",num3);

    }
    
}