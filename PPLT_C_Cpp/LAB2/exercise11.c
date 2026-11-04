#include <stdio.h>
int main() {
    long long n;
    printf("Enter a number: ");
    scanf("%lld", &n);
    long long n1 = n;
    int a;
    long long b = 0;
    while (n > 0) {
        a = n % 10;
        b = b * 10 + a;
        n = n / 10;
    }
    if (b == n1 ){
        printf("The number is a palindrome.\n");
    }
    else {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}
