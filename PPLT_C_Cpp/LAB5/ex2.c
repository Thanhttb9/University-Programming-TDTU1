#include <stdio.h>

int getLength(char s[]) {
    int count = 0;
    while (s[count] != '\0' && s[count] != '\n') {
        count++;
    }
    return count;
}

int main() {
    char s[100];
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);

    int len = getLength(s);
    printf("Chuoi dao nguoc: ");
    for (int i = len - 1; i >= 0; i--) {
        printf("%c", s[i]);
    }
    printf("\n");
    return 0;
}