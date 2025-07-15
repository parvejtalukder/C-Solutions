#include <stdio.h>
long long int if_found(long long int t, long long int array[], long long int num){
    for (long long int i =  0; i < t; i++) {
    if (array[i] == num) {
        return i;
    } 
    }
    return -1;
}
int main() {
    long long int t;
    scanf("%lld", &t);
    long long int array[t];
    long long int num;
    for(long long int i = 0; i < t; i++) {
        scanf("%lld", &array[i]);
    }
    scanf("%lld", &num);
    printf("%lld\n", if_found(t, array, num));
    return 0;
}