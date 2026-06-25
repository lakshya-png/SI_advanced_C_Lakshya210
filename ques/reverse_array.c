#include<stdio.h>
int main(){
    int arr[4]={2,4,5,12};
    int arr1[4];
    int k=3;
    for(int i=0;i<4;i++){
        arr1[i]=arr[k];
        k--;
    }
    for(int i = 0; i < 4; i++) {
        printf("%d ", arr1[i]);
    }
}