#include <stdio.h>
int find(int);
int main(){
    int n;
    printf("enter n:");
    scanf("%d",&n);
    while(n < 10){
        printf("enter n again:");
        scanf("%d",&n);
    }   
    find(n);
    return 0;
}
int find( int a){
    int last = a % 10;
    int first = 0;
    for (int i = 0; a >= 10; i++){
        first = a / 10;
        a /= 10;
    }
    printf(" first digits of number: %d\n", first);
    printf(" last digits of number: %d\n", last);
    return first, last;
}