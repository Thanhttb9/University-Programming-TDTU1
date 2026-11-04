#include <stdio.h>
#include <math.h>
int main () {
    int n;
    printf("enter n: ");
    scanf ("%d", &n);
    n = abs(n);
    int sum = 0;
    int x = 0;
    do {
        x = n % 10;
        sum += x;
        n /= 10;
    } while (n > 0);
    printf ("sum = %d\n", sum);
    return 0;
}