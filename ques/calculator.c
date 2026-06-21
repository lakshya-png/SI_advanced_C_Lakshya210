#include<stdio.h>
int main(){
    int action;
    int num1,num2;
    printf("What you want to do(1.add \n 2.minus \n 3.divide \n 4.multiply)\n");
    scanf("%d",&action);
    printf("enter the numbers\n");
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);
    switch (action)
    {
    case(1):
        printf("the sum of numbers is %d",(num1+num2));
        break;
    case(2):
        printf("the minus of numbers is %d",(num1-num2));
        break;
    case(3):
        printf("the divide of numbers is %.2f",(float)(num1/num2));
        break;
    case(4):
        printf("the mutiply of numbers is %d",(num1*num2));
        break;

    
    default:
        printf("invaild Input!!");
        break;
    }
}