#include <stdio.h>

int main() {
    int a, b;
    printf("Kérem, adja meg a téglalap 'a' oldalának hosszát (egész szám): ");
    scanf("%d", &a);
    printf("Kérem, adja meg a téglalap 'b' oldalának hosszát (egész szám): ");
    scanf("%d", &b);
    int kerulet = 2 * (a + b);
    int terulet = a * b;
    printf("Egy %d és %d oldalú téglalap kerülete: %d\n", a, b, kerulet);
    printf("Egy %d és %d oldalú téglalap területe: %d\n", a, b, terulet);
    
    return 0;
}
