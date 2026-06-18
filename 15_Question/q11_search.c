#include<stdio.h>
int main(){
    int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int tar;
    int row;
    printf("Enter the target value");
    scanf("%d",&tar);
    for(int i=0;i<3;i++){
        if(arr1[i][0]<tar){
            row=i;
        }
    }
    for(int i=0;i<3;i++){
        if(arr1[row][i]==tar){
            printf("founded at (%d,%d)",row,i);
        }
    }
}