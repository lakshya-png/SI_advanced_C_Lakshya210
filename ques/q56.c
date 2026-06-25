#include <stdio.h>

int main() {
    char str[100]="john";
    char str2[100]="singh";
    char str3[100];
    int k=0,i=0;

    while (str[k] != '\0') {
        str3[k]=str[k];
        k++;
    }
    while (str[i] != '\0') {
        str3[k]=str2[k];
        k++;
        i++;
    }
    str3[k] = '\0'; 

    printf("string = %s", str2);

    
}