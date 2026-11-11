#include <stdio.h>
int product_digital(int);
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("profuct of digits: %d\n", product_digital(n));
    return 0;
}
int product_digital(int n) {
    int product = 1;
    while (n > 0) {
        product *= n % 10; 
        n /= 10;       
    }
    return product;
}