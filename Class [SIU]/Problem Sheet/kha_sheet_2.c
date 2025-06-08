#include <stdio.h>

void countdown();
void nana_nani();

int main() {
    countdown();
    nana_nani();
    return 0;
}

void countdown() {
    int i;
    for (i = 10; i >= 0; i--) {
        printf("\t\t\t***%d***\n", i);
        printf("\t\t\tLOVE\n");
    }
}

void nana_nani() {
    printf("\t**Happy Nana + Nani Day!**\n");
}
