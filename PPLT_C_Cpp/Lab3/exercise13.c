#include <stdio.h>
#include <math.h>
int armstrong(int);
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    armstrong(n);
    return 0;
}
int armstrong(int t) {
    int lan = 0;
    int so_goc = t;
    int a = 0;
    int b = 0;
    while(t > 0) {
        t /= 10;
        lan ++;
    }
    t = so_goc;
    while( t > 0){
        a = t % 10;
        b +=(int) pow(a,lan);
        t /= 10;
    }
    if (so_goc == b){
        printf("%d is a armstrong number\n", so_goc);
    }
    else {
        printf("%d is not a armstrong number\n", so_goc);
    }
    return b;
}

