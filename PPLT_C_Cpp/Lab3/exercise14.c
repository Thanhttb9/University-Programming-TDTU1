#include <stdio.h>
int perfect_number(int);
int main () {
    int n;
   do{
    printf("Enter a number: ");
    scanf("%d", &n);
   } while( n <= 1);
    if (perfect_number(n)){
        printf("%d is a perfect number",n);
    }
    else{
        printf("%d is not a perfect number",n);
    }
    return 0;
}
int perfect_number(int n) {
    int tong = 0;
    for (int i = 1; i < n; i++){
        if (n % i == 0){
            tong += i;
        }
    }   
    return (tong == n);
}

