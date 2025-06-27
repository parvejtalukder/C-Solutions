#include <stdio.h>
int main() {
    int t;
    scanf("%d", &t);
    if (t >= 1 && t <= 10000) {
        while(t--) {
            int n, d, sum;
            int last_num, first_num;
            scanf("%d", &n);
            if (n >= 10000 && n <= 99999) {
                last_num = n % 10;  
                
                int temp = n;
                while (temp >= 10) {
                    temp = temp / 10;
                }
                first_num = temp;  
                
                sum = first_num + last_num;
                printf("%d\n", sum);
            }
        }
    }
    return 0;
}
