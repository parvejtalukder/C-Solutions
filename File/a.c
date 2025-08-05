#include <stdio.h>

int main() {
    FILE *myFile;
    char myTxt[1024];
    myFile = fopen("file.txt", "r");
    if (myFile == NULL) {
        printf("Error opening file!\n");
        return 1;
    } else {
        while (fgets(myTxt, sizeof(myTxt), myFile)) {
            printf("%s", myTxt);
        }
    }
    fclose(myFile);
    return 0;
}
