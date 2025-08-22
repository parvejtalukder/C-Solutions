#include <stdio.h>
int main() {
    // Comment Lekhar Obbhash Korchi
    int n;
    scanf("%d", &n);
    int indxOne = 0, indxTwo = 0;
    int arrOne[n], arrTwo[n];
    // Even Odd Alada Kori
    for(int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            arrOne[indxOne++] = i;
        }
    }
    for(int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            arrTwo[indxTwo++] = i;
        }
    }
    // Ak Kortechi Surute Even Nicchi 
    int idxMrg = 0;
    int arrMrg[indxOne + indxTwo];
    // Even adding
    for(int i = 0; i < indxOne; i++) {
        arrMrg[idxMrg++] = arrOne[i];
    }
    // Odd adding
    for(int i = 0; i < indxTwo; i++) {
        arrMrg[idxMrg++] = arrTwo[i];
    }

    for(int i = 0; i < idxMrg; i++) {
        printf("%d ", arrMrg[i]);
    }
    return 0;
}