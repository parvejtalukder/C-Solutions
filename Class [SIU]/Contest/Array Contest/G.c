#include <stdio.h>
#define w 7
int main() {
    long long int sum = 0;
    long long int numberWeek;
    scanf("%lld", &numberWeek);
    long long int size = w * numberWeek;
    long long int week[size];
    for (long long int i = 0; i < size; i++) {
        scanf("%lld", &week[i]);
        sum += week[i];
        if ((i + 1) % 7 == 0) {
            printf("%lld", sum);
            printf(" ");
            sum = 0;
        }
    }
    return 0;
}
