#include <stdio.h>
int main() {
    long long int t;
    scanf("%lld", &t);
    long long int arr[t];
    for(long long int i = 0; i < t; i++) {
        scanf("%lld", &arr[i]);
        if (arr[i] < 0) {
            arr[i] = 2;
        } else if (arr[i] > 0) {
            arr[i] = 1;
        }
    }
    for (long long int j = 0; j < t; j++) {
        printf("%lld", arr[j]);
        printf(" ");
    }
    return 0;
}