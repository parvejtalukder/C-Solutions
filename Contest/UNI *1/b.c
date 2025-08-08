#include <stdio.h>
int limit;
int runner(int runTime, int speed, int restTime);
int min(int a, int b);
int main() {
    int a, b, c, d, e, f;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &limit);
    int runOne, runTwo;
    runOne = runner(a, b, c);
    runTwo = runner(d, e, f);
    if (runOne > runTwo) {
        printf("Takahashi\n");
    } else if (runTwo == runOne) {
        printf("Draw\n");
    } else {
        printf("Aoki\n");
    }
    return 0;
}
int runner(int runTime, int speed, int restTime) {
    int run, runCom, fullCan, timeLeft, totalRun, ans;
    runCom = runTime + restTime; // 3 + 4 = 7 // 1 + 9 = 10
    fullCan = limit / runCom;  // 2 / 7 = 0 // 2 / 10 = 0
    timeLeft = limit % runCom; // 2 % 7 = 2 // 2 % 10 = 2
    run = min(runTime, timeLeft);  // 2 // 1
    totalRun = fullCan * runTime + run; // 2 // 1
    ans = totalRun * speed;      // 2 // 5
    return ans;
}
int min(int a, int b) {
    return (a < b) ? a : b;
}