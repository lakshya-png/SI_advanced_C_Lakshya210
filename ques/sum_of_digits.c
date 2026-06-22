#include<stdio.h>
int main(){
    int num=123;
    int sum=0;
    int rem;
    for(int temp=num;temp>0;temp/=10){
        rem=temp%10;
        sum+=rem;
    }
    printf("%d",sum);
}