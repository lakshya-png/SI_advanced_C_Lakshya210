#include <stdio.h>

int main() {
    char str[100];
    char str2[100];
    

    printf("Enter a string: ");
    scanf("%s", str);
    int k=0;

    while (str[k] != '\0') {
        str2[k]=str[k];
        k++;
    }
    str2[k] = '\0'; 

    printf("Copied string = %s", str2);

    
}