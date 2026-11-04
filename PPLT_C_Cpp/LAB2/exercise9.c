#include <stdio.h>
#include <math.h>
int main () {
    int x; 
    printf ("enter x: ");
    scanf("%d",&x);
    int n = abs(x);
    int last = n % 10;
    int first = n;
    int lan = 1;
    while ( first >= 10){
        first /= 10;
    lan *= 10;
    }
    int result;
    if ( n < 10) {
        result = n;
    }
    else{
        int middle = (n % lan) /10;
        result = last * lan + middle * 10 + first;
    }
    if (x < 0)
        result =- result;
    printf("result: %d\n", result);
    return 0;

}