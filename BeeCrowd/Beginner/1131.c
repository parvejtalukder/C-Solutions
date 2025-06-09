#include <stdio.h>
int main() {
    int inter, gremio;
    int interWins = 0, gremioWins = 0, draws = 0, total = 0;
    int option = 1;
    while (option == 1) {
        scanf("%d %d", &inter, &gremio);
        total++;
        if (inter > gremio)
            interWins++;
        else if (gremio > inter)
            gremioWins++;
        else
            draws++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &option);
    }
    printf("%d grenais\n", total);
    printf("Inter:%d\n", interWins);
    printf("Gremio:%d\n", gremioWins);
    printf("Empates:%d\n", draws);
    if (interWins > gremioWins)
        printf("Inter venceu mais\n");
    else if (gremioWins > interWins)
        printf("Gremio venceu mais\n");
    else
        printf("Nao houve vencedor\n");
    return 0;
}
