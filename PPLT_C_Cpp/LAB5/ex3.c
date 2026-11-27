#include <stdio.h>

int main() {
    char s[100];
    printf("Nhap ho va ten: ");
    fgets(s, sizeof(s), stdin);

    int len = 0;
    while (s[len] != '\0') {
        if (s[len] == '\n') {
            s[len] = '\0';
            break;
        }
        len++;
    }

    int firstSpace = -1;
    for (int i = 0; i < len; i++) {
        if (s[i] == ' ') {
            firstSpace = i;
            break;
        }
    }

    int lastSpace = -1;
    for (int i = len - 1; i >= 0; i--) {
        if (s[i] == ' ') {
            lastSpace = i;
            break;
        }
    }

    if (firstSpace == -1) {
        printf("First name: %s\n", s);
        printf("Last name: %s\n", s);
    } else {
        printf("First name: ");
        for (int i = lastSpace + 1; i < len; i++) {
            printf("%c", s[i]);
        }
        printf("\n");

        printf("Last name: ");
        for (int i = 0; i < firstSpace; i++) {
            printf("%c", s[i]);
        }
        printf("\n");
    }

    return 0;
}