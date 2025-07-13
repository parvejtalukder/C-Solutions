#include <stdio.h>
#include <stdlib.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int arr[n];
    long long int sum_arr = 0;
    for (long long int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
        sum_arr = sum_arr + arr[i];
    }
    long long int ans = abs(sum_arr);
    printf("%lld\n", ans);
    return 0;
}