#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    if (t <= 100) {
        int case_num = 1;
        while(t--) {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            if (a != b && b != c && a != c && a <= 1000 && b <= 1000 && c <= 1000) {
                int sm, mid, big;
                // Sort a, b, c
                if ((a < b && a < c && b < c) || (a < c && a < b && c < b)) {
                    sm = a;
                    if (b < c) { mid = b; big = c; }
                    else { mid = c; big = b; }
                } else if ((b < a && b < c && a < c) || (b < c && b < a && c < a)) {
                    sm = b;
                    if (a < c) { mid = a; big = c; }
                    else { mid = c; big = a; }
                } else {
                    sm = c;
                    if (a < b) { mid = a; big = b; }
                    else { mid = b; big = a; }
                }
                printf("Case %d: %d %d %d\n", case_num, sm, mid, big);
            }
            case_num++;
        }
    }
    return 0;
}