#include <stdio.h>
#include <string.h>

int main() {
    char strOne[3], strTwo[3], strThr[3], strFur[3];

    scanf("%2s", strOne);
    scanf("%2s", strTwo);
    scanf("%2s", strThr);
    scanf("%2s", strFur);

    int h = 0, b2 = 0, b3 = 0, hr = 0;
    
    if (strcmp(strOne, "H") == 0) h = 1;
    if (strcmp(strTwo, "H") == 0) h = 1;
    if (strcmp(strThr, "H") == 0) h = 1;
    if (strcmp(strFur, "H") == 0) h = 1;

    if (strcmp(strOne, "2B") == 0) b2 = 1;
    if (strcmp(strTwo, "2B") == 0) b2 = 1;
    if (strcmp(strThr, "2B") == 0) b2 = 1;
    if (strcmp(strFur, "2B") == 0) b2 = 1;

    if (strcmp(strOne, "3B") == 0) b3 = 1;
    if (strcmp(strTwo, "3B") == 0) b3 = 1;
    if (strcmp(strThr, "3B") == 0) b3 = 1;
    if (strcmp(strFur, "3B") == 0) b3 = 1;

    if (strcmp(strOne, "HR") == 0) hr = 1;
    if (strcmp(strTwo, "HR") == 0) hr = 1;
    if (strcmp(strThr, "HR") == 0) hr = 1;
    if (strcmp(strFur, "HR") == 0) hr = 1;

    if (h == 1 && b2 == 1 && b3 == 1 && hr == 1)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}
