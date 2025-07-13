#include <stdio.h>
int main() {
    long long int n, sum;
    scanf("%lld", &n);
    sum = n * (n + 1) / 2;
    long long int arr[n - 1];
    long long int sum_arr = 0;
    for(long long int i = 0; i < n - 1; i++) {
        scanf("%lld", &arr[i]);
        sum_arr = sum_arr + arr[i];
    }
    long long int ans = sum - sum_arr;
    printf("%lld\n", ans);
    return 0;
}