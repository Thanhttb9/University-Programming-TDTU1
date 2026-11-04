#include <stdio.h>
#include <math.h>
int main () {
    int x; 
    printf ("enter x: ");
    scanf("%d",&x);
    int n = abs(x);
    int last = n % 10;
    int first = n;
    while ( first >= 10)
        first /= 10;
    
    printf(" first number: %d\n", first);
    printf(" last number: %d\n", last);
    return 0;

}