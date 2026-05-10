#include <stdio.h>
int szamol_kerulet(int a, int b) {
    return 2 * (a + b);
}
int szamol_terulet(int a, int b) {
    return a * b;
}
int main() {
    int a, b;
    printf("Kérem a téglalap 'a' oldalának hosszát (egész szám): ");
    scanf("%d", &a);
    printf("Kérem a téglalap 'b' oldalának hosszát (egész szám): ");
    scanf("%d", &b);
    printf("A téglalap kerülete: %d\n", szamol_kerulet(a, b));
    printf("A téglalap területe: %d\n", szamol_terulet(a, b));

    return 0;
}
