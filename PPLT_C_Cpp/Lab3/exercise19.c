#include <stdio.h>
int factorial(int n);
int main () {
    int n;
    do{
        printf("enter n: ");
        scanf("%d", &n);
    } while (n < 0);
    printf("%d\n",factorial(n));
    return 0;
}
int factorial(int a){
    int product = 1;
    for ( int i = 1; i <= a;i++) {
        product *= i;
    }
    return product;
}