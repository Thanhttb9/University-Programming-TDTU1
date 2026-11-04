#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    do {
        if (n <= 1) {
            printf("Please enter a number greater than 1: ");
            scanf("%d", &n);
        }
    } while (n <= 1);
    int dem = 0;
    for ( int i = 1;  i <= n; i++){
        int lan = n % i;
        if (lan == 0) {
            dem++;
        }
    }
        if ( dem > 2) {
            printf("%d is not a prime number.\n", n);
        }
        else if (dem == 2) {
            printf("%d is a prime number.\n", n);
        }

    return 0;
    }
