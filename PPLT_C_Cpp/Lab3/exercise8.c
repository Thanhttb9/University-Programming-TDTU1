#include <stdio.h>
int numbers_digital(int);
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("numbers of digits: %d\n", numbers_digital(n));
    return 0;
}
int numbers_digital(int n) {
    int number = 0;
    while (n > 0) {
        number += 1; 
        n /= 10;       
    }
    return number;
}