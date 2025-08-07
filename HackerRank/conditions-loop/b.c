#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n;
    scanf("%d", &n);
    int nn, sum = 0;
    if (10000 <= n && 99999 >= n) {
        while(n != 0) {
            nn = n % 10;
            sum = sum + nn;
            n = n / 10;
        }
        printf("%d\n", sum);
    }
    return 0;
}