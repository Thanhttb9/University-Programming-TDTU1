#include <stdio.h>
int table(int a);
int main() {
    int n;
       printf("enter n:");
        scanf("%d",&n);
        while(n < 1){
            printf("enter n again:");
            scanf("%d",&n);
        }   
        table(n);
        return 0;
}
int table( int a){
    printf("the table of %d: \n", a);
    for (int i = 1; i <= 10;i++){
        printf("%d x %d = %d\n", a, i, a*i);
    }
}