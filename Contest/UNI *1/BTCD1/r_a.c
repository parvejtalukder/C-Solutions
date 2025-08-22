#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 3) {
        return 0;
    }

    int arrOne[n], arrTwo[n];
    // int iO = 0, iT = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            arrOne[i] = i;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0) {
            arrTwo[i] = i;
        }
    }

    int arrMrg[iO + iT];
    // int m = 0;
    for (int i = 0; i < iO; i++) {
        arrMrg[i] = arrOne[i];
    }
    for (int i = 0; i < iT; i++) {
        arrMrg[i] = arrTwo[i];
    }
    m 
    for (int i = 0; i < m; i++) {
        printf("%d ", arrMrg[i]);
    }

    return 0;
}
