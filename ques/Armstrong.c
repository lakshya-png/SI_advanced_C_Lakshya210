#include <stdio.h>
#include <math.h>

int main() {
    int temp, rem, power;
    int num = 153, sum = 0, count = 0;

    for (int temp=num; temp>0; temp/=10){
        count++;
    }

    for(int temp2=num; temp2>0; temp2/=10){
        rem=temp2%10;
        power= pow(rem,count);
        sum+= power;
    }

    if (sum==num){
        printf("%d is an Armstrong number",num);
    }

    else {
        printf("%d is not an Armstrong number", num);
    }

    return 0;
}
