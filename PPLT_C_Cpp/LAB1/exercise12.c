#include <stdio.h>
int main () {
    int x,y,z;
    printf("nhap goc 1: ");
    scanf("%d", &x);
    printf("nhap goc 2: ");
    scanf("%d", &y);
    printf("nap goc 3: ");
    scanf("%d", &z);
    if ( x > 0 && y > 0 && z > 0 && x + y +z == 180){
        printf(" this is a triangle\n");
    }
    else {
        printf("this is not a triangle\n");
    }
    return 0;
    
}