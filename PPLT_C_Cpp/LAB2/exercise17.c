#include <stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int sum = 0;
    // for loop
    printf("for loop\n");
    for (int i = 1; i < n; i++) {
        if ( n % i == 0){
            sum += i;
        }
    }
    if (sum == n) {
        printf("%d is a perfect number.\n", n);
    }
    else {
        printf("%d is not a perfect number.\n", n);
    }
    // while loop
    sum = 0;
    printf("while loop\n");
    int i = 1;
    while (i < n) {
        if ( n % i == 0){
            sum += i;
        }
        i++;
    }
    if (sum == n) {
        printf("%d is a perfect number.\n", n);
    }
    else {
        printf("%d is not a perfect number.\n", n);
    }
    // do while loop
    sum = 0;
    printf("do while loop\n");
    i = 1;
    do {
        if ( n % i == 0){
            sum += i;
        }
        i++;
    } while (i < n);
    if (sum == n) {
        printf("%d is a perfect number.\n", n);
    }
    else {
        printf("%d is not a perfect number.\n", n);
    }
    return 0;
}