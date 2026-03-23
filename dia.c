#include <stdio.h>

int main() {
    int n;

    printf("Magassag: ");
    if (scanf("%d", &n) != 1) {
        return 1;
    }

    if (n <= 0 || n % 2 == 0) {
        printf("Hiba: Csak pozitiv paratlan szamot fogadunk el!\n");
        return 1;
    }

    for (int i = 1; i <= n; i += 2) {
        for (int j = 0; j < (n - i) / 2; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 2; i >= 1; i -= 2) {
        for (int j = 0; j < (n - i) / 2; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
