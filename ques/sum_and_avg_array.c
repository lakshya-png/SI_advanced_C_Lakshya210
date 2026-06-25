#include<stdio.h>
int main(){
    int arr[4]={2,4,5,12};
    int sum=0;
    int avg;
    for(int i=0;i<4;i++){
        sum+=arr[i];
        avg=sum/4;
    }
    printf("sum= %d \n avg= %d",sum,avg);

}