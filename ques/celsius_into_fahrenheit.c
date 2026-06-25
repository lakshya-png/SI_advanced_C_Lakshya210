#include<stdio.h>
int main(){
    char con;
    float val;
    printf("convert into f/c");
    scanf("%c",&con);
    if(con=='c'||con=='f'||con=='C'||con=='F'){
        if(con=='f'||con=='F'){
            printf("Enter the value(celsius)");
            scanf("%d",&val);
            val=val*(9/5);
            float f=val+32;
            printf("celsius in fahranheit is %d",f);

        }
        if(con=='C'||con=='c'){
            printf("Enter the value(fahranheit)");
            scanf("%d",&val);
            val=(val-32)/1.8;
            
            printf("fahranheit in celsius is %d",val);

        }
    }
}