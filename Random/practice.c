#include <stdio.h>

int main() {
    int arr[12][12];
    for (int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            // int a = 0, b = 0;
            // arr[a][b] = 1;
            // a++;
            // b++;
            arr[i][j] = 0;
            if (i == j) {
                arr[i][j] = 1;
            }
        }
    }

    for (int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            printf(" %d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
