#include <stdio.h>
int main() {
    int n, x, y;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);

        int sum = 0;
        int count = 0;

        for (int j = x; count < y; j++) {
            if (j % 2 != 0) {  
                sum += j;
                count++;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
