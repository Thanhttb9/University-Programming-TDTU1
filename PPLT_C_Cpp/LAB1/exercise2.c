#include <stdio.h>
int main (void) {
    int x ;
    int y ; 
    printf( " nhap x và y:");
    scanf ( "%d %d", &x, &y);
    printf ( "Tổng: %d\n", x + y);
    printf ( "Hiệu: %d\n", x - y);
    printf ( "Tích: %d\n", x * y);
    if ( y != 0) {
        printf ( "Thương: %d\n", x / y);
        printf ( "Chia Dư: %d\n", x % y);
    }
    else {
        printf ("error\n");
    }
    return 0;
}
