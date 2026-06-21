#include<stdio.h>
int main(){
    int num;
    printf("Enter the number\n");
    scanf("%d",&num);
    int fac=1;
    for(int i=num;i>0;i--){
        fac=fac*i;
    }
    printf("The factorial is %d",fac);

}