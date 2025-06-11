#include <stdio.h>
int main() {
    int num;
    int cou = 1;
    scanf("%d", &num);
    if (1 < num && num < 1000) {
        for(int i = 1; i <= num; i++) {
            printf("%d %d %d\n", cou, cou * cou, cou * cou * cou);
            printf("%d %d %d\n", cou, (cou * cou) + 1, (cou * cou * cou) + 1);
            cou++;
        }
    }
    return 0;
}

