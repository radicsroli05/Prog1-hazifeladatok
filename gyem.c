#include <stdio.h>

int main() {
    int h;
    
    printf("Magassag: ");
    if (scanf("%d", &h) != 1 || h <= 0 || h % 2 == 0) {
        printf("Hiba: a magassagnak pozitiv paratlan szamnak kell lennie!\n");
        return 1;
    }
    printf("\n");

    int n = h / 2 + 1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
