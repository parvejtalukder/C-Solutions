#include <stdio.h>
#include <stdbool.h>

void func(int x) {
    bool digits[10] = {false};
    int temp = x;

    while (temp > 0) {
        digits[temp % 10] = true;
        temp /= 10;
    }

    for (int i = 0; i <= 9; i++) {
        if (digits[i]) {
            printf("%d\n", i);
            return;
        }
    }
}

int main() {
    int t, num;
    scanf("%d", &t);
    while (t--) {
        scanf("%d", &num);
        func(num);
    }
    return 0;
}
