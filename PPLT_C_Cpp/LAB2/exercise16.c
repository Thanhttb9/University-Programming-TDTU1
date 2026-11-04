#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = 0;;
    int i = 0;
    int so_goc = n;
    for (; n > 0;) {
        n = n / 10;
         i++;
    }
    n = so_goc;
    //1) while loop
    printf("while loop\n");
    while (n > 0) {
        int a = n % 10;
        int luy_thua = 1;
        for ( int j = 0; j < i; j++) {
             luy_thua *= a;
        }
        sum += luy_thua;
        n = n / 10;

    }
    if (sum == so_goc) {
        printf("The number is an Armstrong number.\n");
    }
    else {
        printf("The number is not an Armstrong number.\n");
    }

    //2) do while loop
    n = so_goc;
    sum = 0;
    printf("do while loop\n");
    do {
        int a = n % 10;
        int luy_thua = 1;             
        for ( int j = 0; j < i; j++) {
             luy_thua *= a;
        }
        sum += luy_thua;
        n = n / 10;
    } while (n > 0);
    if (sum == so_goc) {
        printf("The number is an Armstrong number.\n");
    }
    else {
        printf("The number is not an Armstrong number.\n");
    }
    //3) for loop
    n = so_goc;
    sum = 0;
    printf("for loop\n");
    for (; n > 0;) {
        int a = n % 10;
        int luy_thua = 1;
        for ( int j = 0; j < i; j++) {
             luy_thua *= a;
        }
        sum += luy_thua;
        n = n / 10;
    }
    if (sum == so_goc) {
        printf("The number is an Armstrong number.\n");
    }
    else {
        printf("The number is not an Armstrong number.\n");
    }
    return 0;
}