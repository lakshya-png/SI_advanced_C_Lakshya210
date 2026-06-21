#include<stdio.h>
int main(){
    char car;
    printf("Enter the character");
    scanf("%c",&car);
    if(car=='0'||car=='1'||car=='2'||car=='3'||car=='4'||car=='5'||car=='6'||car=='7'||car=='8'||car=='9'){
        printf("digit");
    }
    else if(car=='!'||car=='@'||car=='#'||car=='$'||car=='%'||car=='^'||car=='&'||car=='*'||car=='()'||car=='~'||car=='?'||car=='`')
    {
        printf("special character");
    }
    else{
        printf("Alphabet");
    }
    
    

}