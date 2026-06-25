#include<stdio.h>
int main(){
    int arr[4]={2,4,5,12};
    int min=arr[0],max=arr[0];
    for(int i=0;i<4;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("The smallest is %d and largest is %d",min,max);
}