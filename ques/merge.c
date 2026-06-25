#include<stdio.h>
int main(){
    int arr1[3]={1,5,3};
    int arr2[4]={13,53,6,2};
    int arr3[7];
    int k=0;
    for(int i=0;i<4;i++){
        arr3[k]=arr1[i];
    }
    for(int i=0;i<5;i++){
        arr3[k]=arr2[i];
    }
}