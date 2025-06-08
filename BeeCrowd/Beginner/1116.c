#include <stdio.h>
int main() {
    int c, i = 1;
    float x, y, ans;
    scanf("%d", &c);
    while (i <= c) {
        scanf("%f %f", &x, &y);
        if (y != 0) {
            ans = x / y;
            printf("%.1f\n", ans);
        } else {
            printf("divisao impossivel\n");
        }
        i++;
    }
    return 0;
}
