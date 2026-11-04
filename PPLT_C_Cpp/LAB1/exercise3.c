#include <stdio.h>
int main () {
    double x;
    double y; 
    printf( " nhap dài và rộng:");
    scanf ( "%lf %lf", &x, &y);
    printf ( " Chu vi của hình chữ nhập là: %lf\n",  (x + y)*2);
    printf ( " Diện Tích của hình chữ nhật là: %lf\n", x * y);
    return 0;
}
