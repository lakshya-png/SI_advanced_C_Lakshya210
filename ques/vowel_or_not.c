#include<stdio.h>
int main(){
    char car;
    printf("Enter the character");
    scanf("%c",&car);
    if(car=='a'||car=='i'||car=='o'||car=='e'||car=='u'||car=='A'||car=='I'||car=='O'||car=='E'||car=='U'){
        printf("character is a vowel");
    }
    else{
        printf("character is not a vowel it is a consonant ");
    }

}