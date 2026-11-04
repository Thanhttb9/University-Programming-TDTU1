#include <stdio.h>
#include <math.h>
int main () {
    int n;
    printf("enter n: ");
    scanf("%d",&n);
    int dem = 0;
     n = abs(n);
    if (n == 0)
        dem = 1;
    for ( ; n > 0; n /= 10){
        dem += 1;
        
    }
    printf ("%d\n", dem);
    return 0;
}