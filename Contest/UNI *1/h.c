#include <stdio.h>

int main() {
    int a, b, c;
    int sm, md, hg;
    scanf("%d %d %d", &a, &b, &c);

    if (a <= b && a <= c) {
        sm = a;
        if (b <= c) {
            md = b;
            hg = c;
        } else {
            md = c;
            hg = b;
        }
    } else if (b <= a && b <= c) {
        sm = b;
        if (a <= c) {
            md = a;
            hg = c;
        } else {
            md = c;
            hg = a;
        }
    } else {
        sm = c;
        if (a <= b) {
            md = a;
            hg = b;
        } else {
            md = b;
            hg = a;
        }
    }

    printf("%d %d %d\n", sm, md, hg);
    return 0;
}
