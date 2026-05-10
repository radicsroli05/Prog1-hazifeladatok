#include <stdio.h>
#include <math.h>
#define M_PI 3.14159265358979323846

int main() {
    double r;
    printf("Kérem, adja meg a kör sugarát (valós érték): ");
    scanf("%lf", &r);
    double kerulet = 2 * r * M_PI;
    double terulet = r * r * M_PI;2 tizedesjegyre kerekítve)
    printf("\n--- Eredmények ---\n");
    printf("A(z) %.2lf sugarú kör kerülete: %.2lf\n", r, kerulet);
    printf("A(z) %.2lf sugarú kör területe: %.2lf\n", r, terulet);
    
    return 0;
}
