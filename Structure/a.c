#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    int reg;
};

int main() {
    FILE *file;
    file = fopen("info.txt", "a");
    struct Student info;
    char intr[10];  

    fprintf(file, "==== INFORMATION ====\n");

    do {
        fgets(info.name, sizeof(info.name), stdin);
        info.name[strcspn(info.name, "\n")] = 0;  

        if (strcmp(info.name, "end") == 0) {
            break;
        }

        scanf("%d", &info.roll);
        scanf("%d", &info.reg);
        getchar();  

        fprintf(file, "%s\n", info.name);
        fprintf(file, "%d\n", info.roll);
        fprintf(file, "%d\n", info.reg);

        printf("Enter next name (type end to stop): ");

    } while (1);

    fclose(file);
    return 0;
}
