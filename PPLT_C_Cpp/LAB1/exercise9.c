#include <stdio.h>
int main() {
    int x, y, z;
    printf("nhap x, y, va z: ");
    scanf( "%d %d %d", &x, &y, &z);
    if (x >= y && x >= z){
      printf("maximum is %d\n", x);
    }
    else if (y >= x && y >= z){
        printf("maximum is %d\n", y);
    }
    else if ( z >= y && z >= x){
        printf("maximum is %d\n", z);
    }
    return 0;
}