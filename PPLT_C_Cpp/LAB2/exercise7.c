#include <stdio.h>
#include <math.h>
int main () {
    int n;
    printf("enter n: ");
    scanf ("%d", &n);
    n = abs(n);
    int tich = 1;
    int x = 0;
    do {
        x = n % 10;
        tich *= x;
        n /= 10;
    } while (n > 0);
    printf ("tich = %d\n", tich);
    return 0;
}