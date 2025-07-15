#include <stdio.h>

int main() {
    long long int N;
    scanf("%lld", &N);
    long long int ARR[N];
    for (long long int i = 0; i < N; i++) {
        scanf("%lld", &ARR[i]);
    }

    long long int PR = ARR[0];
    for (long long int j = 1; j < N; j++) {
        if (ARR[j] > PR) {
            PR = ARR[j];
        } else {
            break;
        }
    }
    printf("%lld\n", PR);
    return 0;
}
