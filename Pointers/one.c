#include <stdio.h>
int main() {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i=0; i < 10; i++) {
        printf("%d of %d\n", &a[i], i+1 );
    }
    return 0;
}