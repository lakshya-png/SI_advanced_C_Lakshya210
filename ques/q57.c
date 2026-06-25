#include <stdio.h>

int main() {
    char str[100]="john";
    char str2[100]="john";
    char str3[100];
    int k=0,i=0;

    while (str[i] != '\0' && str2[i] != '\0') {
        if (str[i] != str2[i]) {
            printf("Strings are not equal");
            return 0;
        }
        i++;
    }
    if (str[i] == '\0' && str2[i] == '\0'){
        printf("Strings are equal");
    }

    
}