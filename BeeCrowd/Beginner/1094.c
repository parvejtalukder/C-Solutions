#include <stdio.h>
int main() {
    int num;
    char sign;
    int i = 1;
    int n, total = 0, c = 0, r = 0, s = 0;
    scanf("%d", &n);
    while (i<=n) {
        scanf("%d %c", &num, &sign);
        total += num;
        if (sign == 'C') {
            c = c + num;
        } else if (sign == 'S') {
            s = s + num;
        } else if (sign == 'R') {
            r = r + num;
        }
        i++;
    }
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);
    printf("Percentual de coelhos: %.2f %%\n", (c * 100.0) / total);
    printf("Percentual de ratos: %.2f %%\n", (r * 100.0) / total);
    printf("Percentual de sapos: %.2f %%\n", (s * 100.0) / total);
    return 0;
}
