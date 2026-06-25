#include<stdio.h>
int main(){
    int num=125;
    int rem;
    int rev=0;
    for(int temp=num;temp>0;temp/=temp){
        rem=temp%10;
        rev=rev*10+rem;
    }
}