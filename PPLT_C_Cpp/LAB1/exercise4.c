#include <stdio.h>
int main () {
    int days, years, weeks, remainingdays;
    printf (" nhap so ngay: ");
    scanf ( " %d", &days);
    years = days / 365;
    weeks = (days % 365) / 7;
    remainingdays = (days % 365) % 7;
    printf ( "năm: %d\n", years);
    printf ( "tuần: %d\n", weeks);
    printf ( "ngày dư: %d\n", remainingdays);
    return 0;

}
