#include <stdio.h>

int main() {
    int i;
    char str1[13] = "Hello world!";
    char str2[13];

    for(i = 0; i < 13; i++){
        str2[i] = str1[i];
        printf("%c", str2[i]);
    }
    
    return 0;
}