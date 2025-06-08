#include <stdio.h>
#include <unistd.h>

int main (){

    int n = 5;

    int mark[n], highest;

    for(int i = 1; i <= n; i++){

        scanf("%d", mark[i]);

    }

    printf("%d", mark);

    return 0;
}