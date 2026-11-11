#include <stdio.h>
int exchange_digital(int);
int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("exchange of digits: %d\n", exchange_digital(n));
    return 0;
}
int exchange_digital(int n) {
    int last = 0;
    int goc = n;
    int first = n % 10;
    double lan = (double)1/10;
    int ket_qua = 1;
    while (n > 0) {
        last = n % 10; 
        n /= 10;     
        lan *= 10.0;  
    }
    int middle =  goc - last * lan - first;
    ket_qua = first * lan + middle + last;
    return ket_qua;
}