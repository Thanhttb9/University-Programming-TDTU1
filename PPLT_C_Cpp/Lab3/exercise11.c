#include <stdio.h>
int palindrome(int);
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d", palindrome(n));
    return 0;
}

int palindrome( int n) {
    int a = 0;
    int b = 0;
    int so_goc = n;
    for( int i = 0; n > 0; i++){
        a = n % 10;
        b = b * 10 + a;
        n /= 10;
    }
    if ( b == so_goc){
        printf("%d is a paliddrome number\n",so_goc);
    }
    else{
        printf("%d is not a palidrme number\n",so_goc);
    }
    return b;
}