#include <stdio.h>
#include<string.h>

int main() {
    char str[100],str2[100], temp;
    int len;

    printf("Enter a string: ");
    scanf("%s", str);
    len= strlen(str);
    

    for (int i = 0; i < len; i++) {
        str2[i] = str[len - 1 - i];
        
    }
    str2[len] = '\0';
    if (strcmp(str, str2) == 0){
        printf("Palindrome\n");
    }
    else{
        printf("Not a palindrome\n");
    }

    

    
}