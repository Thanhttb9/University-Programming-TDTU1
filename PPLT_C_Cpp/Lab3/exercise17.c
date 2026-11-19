#include <stdio.h>
long long perfect_number(int);
int main () {
    long long n;
   do{
    printf("Enter a number: ");
    scanf("%lld", &n);
   } while( n < 6);
   printf("%lld",perfect_number(n));
    return 0;
}
long long perfect_number(int n) {
    long long j = 1;
    for(int j = 1; j < n;j++) { 
        long long tong = 0;
            for (long long i = 1; i < j; i++){
               if (j % i == 0){
                    tong += i;
                 }
            }   
            if (tong == j){
                 printf("%lld\n",j);
            }
     }
     return j;
}

