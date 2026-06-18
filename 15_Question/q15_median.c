#include<stdio.h>
int main(){
    int arr1[5]={1,2,5,12,40};
    int arr2[4]={9,10,11,110};
    int arr3[9];
    int k=0;
    for(int i=0;i<5;i++){
        arr3[k++]=arr1[i];
    }
    for(int i=0;i<4;i++){
        arr3[k++]=arr2[i];
    }
    int s=sizeof(arr3)/sizeof(arr3[0]);
    int temp;
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            if(arr3[j]>arr3[j+1]){
                temp=arr3[j+1];
                arr3[j+1]=arr3[j];
                arr3[j]=temp;
            }
        }
    }
    float ma;
    if(s%2==0){
        ma=(arr3[s/2]+arr3[(s/2)-1])/2;
        printf("%f",ma);

    }
    else{
        printf("%f",arr3[s/2]/2);
    }
}
