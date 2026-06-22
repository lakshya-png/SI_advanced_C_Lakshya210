#include<stdio.h>
int main(){
    int num=123;
    int rev=0,dig;
    for(int temp=num;temp>0;temp=temp/10){
        dig=temp%10;
        rev=rev*10+dig;
    }
    printf("the reverse of number is %d",rev);
}