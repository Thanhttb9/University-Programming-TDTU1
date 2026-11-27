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

    printf("Do dai chuoi la: %d\n", getLength(s));
    return 0;
}
