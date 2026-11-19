#include <stdio.h>
#include <math.h>
void armstrong(int);
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    armstrong(n);
    return 0;
}
void armstrong(int x) {
    for(int i = 1; i <= x; i++) {
        int t = i;
        int lan = 0;
        int so_goc = t;
        while(t > 0) {
            t /= 10;
            lan ++;
        }
        t = so_goc;
         int b = 0;
        while( t > 0){
           int a = t % 10;
            b +=(int)round (pow(a,lan));
            t /= 10;
        }
        if (so_goc == b){
            printf("%d\n", i);
        }
    }
}

