#include <stdio.h>
int main() {
    int T, i;
    scanf("%d", &T);
    if (T <= 10) {
        for(i = 1; i <= T; i++) {
            int num, dvdr;
            scanf("%d", &num);
            printf("Case %d:", i); 
            if (num >= 1 && num <= 100000) {
                for(dvdr = 1; dvdr <= num; dvdr++) { 
                    if (num % dvdr == 0) {
                        printf(" %d", dvdr);
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}
