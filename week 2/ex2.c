#include <stdio.h>
#include <string.h>

int main() {
    char str[256];
    printf("Enter the string to be reversed\n");
    scanf("%s",str);


    int strSize = strlen(str);
    for(int i = 0; i<=strSize; i++) {
        printf("%c", str[strSize-i]);
    }
    return 0;
}
