#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int n1 = n;
    int a;
    int b = 0;
    while (n > 0) {
        a = n % 10;
        b = b * 10 + a;
        n = n / 10;
    }
    printf("Reversed number: %d\n", b);
    return 0;
}

