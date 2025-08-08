#include <stdio.h>
int main() {
    do {
        int n;
        scanf("%d", &n); 
        if (n == 0) {
            break;
        }
        int num[n];
        int cost = num[0];
        int costCalc;
        for(int i = 1; i < n; i++) {
            scanf("%d", &num[i]);
            cost = cost + num[i]; // 1 + 2 = 3 //
            costCalc = cost + cost; 
        }
        // 1 2 3
    } while (1);
    return 0;
}