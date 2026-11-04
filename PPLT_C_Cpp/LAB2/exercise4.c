#include <stdio.h>
int main (){
    int n;
    do {
        printf("enter n: ");
        scanf("%d", &n);
        if(n <= 0)
            printf("try again.");
    } while (n <= 0);
    //1) for loop
    int sum = 0;
    for ( int i = 1; i <= n; i++)
        sum += i;
    printf("for: %d\n", sum);
    //2) while loop
    sum = 0;
    int i = 1;
    while (i <= n) {
        sum += i;
        i++;
    }
    printf("while: %d\n", sum);
    //3) do-while loop
    sum = 0;
    i = 1;
    do {
        sum +=i;
        i++;
    } while (i <= n);
    printf("do-while: %d\n", sum);
    return 0;
}