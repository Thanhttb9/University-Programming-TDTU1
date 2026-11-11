#include <stdio.h>
int reverse(int);
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("reverse of digits: %d\n", reverse(n));
    return 0;
}

int reverse( int n) {
    int a = 0;
    int b = 0;
    for( int i = 0; n > 0; i++){
        a = n % 10;
        b = b * 10 + a;
        n /= 10;
    }
    return b;
}