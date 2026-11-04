#include <stdio.h>
int main () {
    char c;
    printf(" enter: ");
    scanf("%c", &c);
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z'|| c >= '0' && c <= '9'){
        printf("this is alphanumeric\n ");
    }
    else {
        printf("this is not a alphanumeric\n ");
    }
    return 0;
}