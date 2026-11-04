#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        if (n < 0 || n > 255){
            printf("try again: ");
            scanf("%d", &n);
        }
    } while (n < 0 || n > 255);
    int a = 0;
    int b = 0;
    int so_goc = n;
    int dem = 1;
    while (n > 0) {
        a = n % 2;
       b += a * dem;
         dem *= 10;
        n = n / 2; 
    }
    printf("The binary representation of %d is: %d\n", so_goc, b);
    return 0;
}

