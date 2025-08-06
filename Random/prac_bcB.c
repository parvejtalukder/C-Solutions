#include <stdio.h>

int main() {
    int arr[12][12];

    for (int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            arr[i][j] = 0;  
        }
    }

    for (int i = 0; i < 12; i++) {
        for(int j = 0; j < 11; j++) {
            arr[i][j] = 1;
        }
    }

    // for(int i = 0; i < 12; i++) {
    //     for(int j = i; j < 12 - i; j++) {
    //         arr[i][j] = 5;
    //     }
    // }

    for (int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            printf(" %d ", arr[i][j]);  
        }
        printf("\n");
    }

    return 0;
}
