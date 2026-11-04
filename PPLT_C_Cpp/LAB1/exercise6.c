#include <stdio.h>
#include <math.h>
int main (void){
    double x;
    printf (" nhập số: ");
    scanf (" %lf", &x);
    double gttd = abs(x);
    printf ( "giá trị tuyệt đối: %.2lf ", gttd);
    return 0;
}
