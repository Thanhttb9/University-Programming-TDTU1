#include <stdio.h>

int main() {
    char s1[200], s2[100];
    printf("Nhap chuoi s1: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Nhap chuoi s2: ");
    fgets(s2, sizeof(s2), stdin);

    int len1 = 0;
    while (s1[len1] != '\0' && s1[len1] != '\n') {
        len1++;
    }
    int i = 0;
    while (s2[i] != '\0' && s2[i] != '\n') {
        s1[len1] = s2[i];
        len1++;
        i++;
    }
    s1[len1] = '\0'; 

    printf("Chuoi s1 sau khi noi: %s\n", s1);
    return 0;
}