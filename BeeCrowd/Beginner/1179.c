#include <stdio.h>

int main() {
    int par[5], impar[5];
    int ip = 0, im = 0;
    int num;

    for (int i = 0; i < 15; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            par[ip] = num;
            ip++;
            if (ip == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("par[%d] = %d\n", j, par[j]);
                }
                ip = 0;
            }
        } else {
            impar[im] = num;
            im++;
            if (im == 5) {
                for (int j = 0; j < 5; j++) {
                    printf("impar[%d] = %d\n", j, impar[j]);
                }
                im = 0;
            }
        }
    }

    for (int j = 0; j < im; j++) {
        printf("impar[%d] = %d\n", j, impar[j]);
    }
    for (int j = 0; j < ip; j++) {
        printf("par[%d] = %d\n", j, par[j]);
    }

    return 0;
}
