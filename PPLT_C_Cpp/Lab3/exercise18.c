#include <stdio.h>
int binary_cover(int n);
int main () {
    int n;
    do{
        printf("enter n: ");
        scanf("%d", &n);
    } while (n < 0 || n > 255);
    printf("%08d\n", binary_cover(n));
    return 0;

}
int binary_cover(int a) {
    int tong = 0;
    int b = 0;
    int lan = 1;
    for (int i = 0; i <= 7;i++){
        b = a % 2;
        tong += b * lan;
        a /= 2;
        lan *= 10;
    }
    return tong;
}
