#include <stdio.h>

int main() {
    char s[200], res[200];
    printf("Nhap chuoi can chuan hoa: ");
    fgets(s, sizeof(s), stdin);
    int i = 0, j = 0;
    while (s[i] == ' ') {
        i++;
    }
    while (s[i] != '\0' && s[i] != '\n') {
        if (s[i] != ' ') {
            res[j] = s[i];
            j++;
        }
         else {
            if (s[i + 1] != ' ' && s[i + 1] != '\0' && s[i + 1] != '\n') {
                res[j] = ' ';
                j++;
            }
        }
        i++;
    }
    res[j] = '\0';

    for (int k = 0; res[k] != '\0'; k++) {
        if (k == 0 || res[k - 1] == ' ') {
            // Ky tu dau tien cua moi tu -> chuyen thanh chu HOA
            if (res[k] >= 'a' && res[k] <= 'z') {
                res[k] = res[k] - 32;
            }
        }
        else{
            if (res[k] >= 'A' && res[k] <= 'Z') {
                res[k] = res[k] + 32;
            }
        }
    }

    printf("Chuoi sau khi chuan hoa: \"%s\"\n", res);
    return 0;
}