#include <stdio.h>
int sumEven(int);

int main () {
    int n;
        printf("enter n:");
        scanf("%d",&n);
       while(n < 1){
            printf("enter n again:");
            scanf("%d",&n);
        }
        printf(" sum even from 1 to %d is %d ",n,sumEven(n));
        return 0;
}

int sumEven( int a){
    int sum = 0;
    for (int i = 1; i <= a; i++){
        if( i % 2 == 0){
            sum += i;
        }
    }
    return sum;
}
