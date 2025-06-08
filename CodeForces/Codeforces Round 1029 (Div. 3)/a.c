#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, x;
        scanf("%d %d", &n, &x);
        int a[n];
        int l = -1, r = -1;

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
            if (a[i] == 1) {
                if (l == -1) l = i;
                r = i;
            }
        }

        if (r - l + 1 <= x)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
