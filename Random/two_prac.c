#include <stdio.h>
int main() {
    int arr[12][12];
    for (int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            arr[i][j] = 0;           
            if (i == j) {
                arr[i][j] = 1;       
            } 
            if (i + j == 11) {
                arr[i][j] = 1;
            }
            int x;
            for(x = i+1; x < 12 - (i+1); x++) {
                arr[i][x] = 5;
            }
        }
    }
    for (int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            printf("%2d ", arr[i][j]);  
        }
        printf("\n");
    }
    return 0;
}