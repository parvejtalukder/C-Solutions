#include <stdio.h>
int main() {
    int t;
    int Y = 0;
    int PA, PB;
    double G1, G2;
    scanf("%d", &t);
    while (t--) {
        scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
        if (PA >= 100 && PA <= 1000000 &&
        PB >= 100 && PB <= 1000000 &&
        PA < PB &&
        G1 >= 0.1 && G1 <= 10.0 &&
        G2 >= 0.0 && G2 <= 10.0 &&
        G1 > G2) {
            while (PA <= PB && Y <= 100) {
                PA = PA + (int)(PA * G1 / 100); 
                PB = PB + (int)(PB * G2 / 100);
                Y++;
            }
        }
        if (Y == 100) {
                printf("Mais de 1 seculo.\n");
            } else {
                printf("%d anos.\n", Y);
        }
    }
    return 0;
}