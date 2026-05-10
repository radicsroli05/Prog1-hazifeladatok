#include <stdio.h>

int main() {
    int h;
    
    printf("magassag: ");
    scanf("%d", &h);
    printf("\n");

    for (int i = 1; i <= h; i++) {
        for (int j = 0; j < h - i; j++) {
            printf(" ");
        }
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        
        printf("  ");
        
        for (int j = 0; j < i; j++) {
            printf("#");
        }
        printf("\n");
    }
    
    return 0;
}
