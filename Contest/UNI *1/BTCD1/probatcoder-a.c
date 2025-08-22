#include <stdio.h>

int main() {
    int n, l, r;
    scanf("%d %d %d", &n, &l, &r);

    char num[n + 1];   
    scanf("%s", num);  

    int isTrue = 1; 
    for (int i = l - 1; i < r; i++) {
        if (num[i] != 'o') {
            isTrue = 0; 
            break;    
        }
    }

    if (isTrue) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
