#include <stdio.h>
#define SIZE 8
// 0 23 24 145 301 413 631 632
long long int conditionOne(long long int array[]);
long long int conditionTwo(long long int array[]);
long long int conditionThree(long long int array[]);
int main() {
    long long int arr[SIZE];

    for (int i = 0; i < SIZE; i++) {
        scanf("%lld", &arr[i]);
    }
    long long int one = conditionOne(arr);
    long long int two = conditionTwo(arr);
    long long int three = conditionThree(arr);
    if (one == 0 && two == 0 && three == 0) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}
long long int conditionOne(long long int array[]) {
    for (int i = 1; i < SIZE; i++) {
        if (array[i] < array[i - 1]) {
            return 1;
        }
    }
    return 0;
}
long long int conditionTwo(long long int array[]) {
    for (int i = 0; i < SIZE; i++) {
        if (array[i] < 100 || array[i] > 675) {
            return 1;
        }
    }
    return 0;
}
long long int conditionThree(long long int array[]) {
    for (int i = 0; i < SIZE; i++) {
        if (array[i] % 25 != 0) {
            return 1;
        }
    }
    return 0;
}
