#include <stdio.h>
int main () {
    int x;
    printf (" nhập năm: ");
    scanf (" %d", &x);
    int nam = x % 4;
    if ( nam != 0){
        printf ( " %d không phải là năm nhuân", x);
    }
    else {
        printf ( " %d là năm nhuận", x);
    }
    return 0;
}
