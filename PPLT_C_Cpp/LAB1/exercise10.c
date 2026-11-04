#include <stdio.h>
int main (void) {
    int x;
    printf(" enter number: ");
    scanf("%d", &x);
    if ( x % 2  == 0){
        printf(" %d is even number.", x);
    }
    else{
        printf(" %d is odd number.", x);
    }
    return 0;
    }