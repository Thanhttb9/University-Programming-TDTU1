#include <stdio.h>
int main() {
    int x, y;
    printf("nhap x va y: ");
    scanf( "%d %d", &x, &y);
    if (x > y){
      printf("maximum is %d\n", x);
    }
    else {
        printf("maximum is %d\n", y);
    }
    return 0;
}