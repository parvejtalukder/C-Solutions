#include <stdio.h>
int main() {
    long long int t;
    scanf("%lld", &t);
    long long int arr[t];
    for(long long int i = 0; i < t; i++) {
        scanf("%lld", &arr[i]);
    }
    for (long long int j = 0; j < t; j++) {
        if (arr[j] <= 10) {
            printf("A[%lld] = %lld\n", j, arr[j]);
        }
    } 
    return 0;
}