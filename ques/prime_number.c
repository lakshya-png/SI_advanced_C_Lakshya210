#include<stdio.h>
int main(){
    printf("Enter the number");
    int num;
    scanf("%d",num);
    if(num==2||num==3||num==5||num==7){
        printf("the number is prime number");
    }
    else{
        printf("is not a prime number");
    }
}