#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    do {
        if (n <= 1) {
            printf("try again: ");
            scanf("%d", &n);
        }
    } while (n <= 1);
    
    int dem = 0;
    int sum = 0;
    //1) for loop to find all prime numbers from 1 to n
    printf("for loop\n");
    for (int j = 1; j <= n; j++){
        for ( int i = 1;  i <= j; i++){
            int lan = j % i;
            if (lan == 0) {
                dem++;
            }
        }
        if (dem == 2) {
            printf("%d ", j);
        }
        dem = 0;
    }
    
    //2} while loop to find all prime numbers from 1 to n
    printf("\nwhile loop\n");
    int j = 1;
    while (j <= n) {
        int i = 1;
        while (i <= j) {
            int lan = j % i;
            if (lan == 0) {
                dem++;
            }
            i++;                    
        }
        if (dem == 2) {
            printf("%d ", j);
        }
        dem = 0;
        j++;
    }
    //3) do while loop to find all prime numbers from 1 to n
    printf("\ndo while loop\n");
    j = 1;
    do {
        int i = 1;
        do {
            int lan = j % i;
            if (lan == 0) {
                dem++;
            }
            i++;
        } while (i <= j);
        if (dem == 2) {
            printf("%d ", j);
        }
        dem = 0;
        j++;
    } while (j <= n);
    return 0;
    }
