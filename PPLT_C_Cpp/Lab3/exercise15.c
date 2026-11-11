#include <stdio.h>
int prime(int);
int main () {
    int n;
   do{
    printf("Enter a number: ");
    scanf("%d", &n);
   } while( n <= 1);
    printf("%d", prime(n));
    return 0;
}
int prime(int n) {
    int lan = 0;
    for(int j = 1; j < n; j++){
        for (int i = 1; i <= j; i++){
            if (j % i == 0) {
                lan += 1;
            }
        }
        if (lan == 2)
            printf("%d\n",j);
        lan = 0;
    }
}
