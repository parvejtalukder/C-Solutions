#include <stdio.h>
int main() {
    int t;
    int PA, PB;
    double G1, G2;
    scanf("%d", &t);
    while (t--) {
        int Y = 0;
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        while (PA <= PB && Y <= 100) {
            PA = PA + (int)(PA * G1 / 100); 
            PB = PB + (int)(PB * G2 / 100);
            Y++;
        }
        if (Y > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", Y);
        }
    }
    return 0;
}