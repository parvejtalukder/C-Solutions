#include <stdio.h>
#include <string.h>
int main() {
    int tCase;
    scanf("%d", &tCase);
    char strng[tCase][50];
    while (tCase--) {
        fgets(strng[tCase][50], sizeof(strng[tCase][50]), stdin);
        
    }
    return 0;
}