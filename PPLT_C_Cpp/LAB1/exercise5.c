#include <stdio.h>
int main ( void) {
    float celsius, fahrenhit;
    printf ( " nhập nhiệt độ C:");
    scanf ("%f", &celsius);
    fahrenhit = celsius * 9.0 / 5.0 + 32;
    printf ("Độ F là: %.2f\n", fahrenhit);
    return 0;  
} 
