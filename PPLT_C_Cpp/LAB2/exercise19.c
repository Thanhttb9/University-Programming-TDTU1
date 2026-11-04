#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int tich = 1;
    for (int i = 1; i <= n; i++) {
        tich *= i;
    }
    printf("The factorial of %d is: %d\n", n, tich);
    return 0;
}