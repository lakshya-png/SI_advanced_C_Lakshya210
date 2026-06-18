#include<stdio.h>
int main(){
    int size;
    printf("enter the size of array\n");
    scanf("%d",&size);
    int ar[size];
    for(int i=0;i<(size);i++)
    {
        scanf("%d",&ar[i]);
    }
    int rev=0,rem,count=0;
    for(int ind=0;ind<size;ind++)
    {   int rev=0;
        for(int temp=ar[ind];temp!=0;temp=temp/10)
        {
            rem=temp%10;
            rev=rev*10+rem;
        }
        if(rev==ar[ind]){
            count++;
        }
        if(count>0){
            printf("it contain one palindrome or more");
            break;
        }
    }
}