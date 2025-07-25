#include <stdio.h>
int main() {
    char saarc[7][100] = {"Bangladesh", "India", "Pakistan", "Sri Lanka", "Nepal", "Bhutan", "Maldives"};
    int i, j;
    /*for(row = 0; row < 7; row++) {
        printf("%s\n", saarc[row]);
    }
    printf("\n");
    printf("%c\n", saarc[3][3]);
    printf("%c\n", saarc[0][5]);
    printf("%c\n", saarc[5][0]);
    */
    for(i = 0; i < 7; i++) {
        for(j = 0; j < 7; j++) {
            printf("%c", saarc[i][j]);
        }
    }
    return 0;
}
