#include <stdio.h>
#define S 5
int FSONE();
int FSTWO ();
void ORDE(int x, int w);
int main() {
    int who;
    int elder, younger, hAvg;
    elder = FSONE();
    younger = FSTWO();
    if (elder > younger) {
        hAvg = elder;
        who = 1;
    } else {
        hAvg = younger;
        who = 0;
    }
    ORDE(hAvg, who);
    return 0;
}
int FSONE() {
    int sub[S];
    int i, total = 0;
    printf("Elder's Marks:\n");
    for (i = 0; i < S; i++) {
        printf("SUDB%d: ", 6+i);
        scanf("%d", &sub[i]);
        total = total + sub[i];
    }
    return total / S;
}
int FSTWO () {
    int sub[S];
    int i, total = 0;
    printf("Younger's Marks:\n");
    for (i = 0; i < S; i++) {
        printf("SUBD%d: ", i+9);
        scanf("%d", &sub[i]);
        total = total + sub[i];
    }
    return total / S;
}
void ORDE(int x, int w) {
    if (w == 1) {
        printf("The Highest Average = %d\n", x);
        printf("The Highest Average from The Elder.\n");
    } else {
        printf("The Highest Average = %d\n", x);
        printf("The Highest Average from The Younger.\n");   
    }
}