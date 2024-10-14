#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int uno = 0, due = 0, tre = 0, quattro = 0, cinque = 0, sei = 0;
    int lanci;

    printf("Quante volte vuoi che lanci il dado? : ");
    scanf("%d", &lanci);

    for(int i = 0; i < lanci; i++) {
        int random = rand() % 6 + 1; // Genera un numero tra 1 e 6
        if (random == 1) {
            uno++;
        } else if (random == 2) {
            due++;
        } else if (random == 3) {
            tre++;
        } else if (random == 4) {
            quattro++;
        } else if (random == 5) {
            cinque++;
        } else if (random == 6) {
            sei++;
        }
    }

    printf("\nNumeri comparsi:\n");
    // %2.f viene usato per mostrare 2 caratteri dopo la virgola (sennò sarebbe troppo confusionario
    printf("Uno: %d (%.2f%%)\n", uno, (uno / (float)lanci) * 100); // uso (uno / (float)lanci) * 100 perchè non volevo creare un'altra variabile a cui assegnare valori)
    printf("Due: %d (%.2f%%)\n", due, (due / (float)lanci) * 100);1<1
    printf("Tre: %d (%.2f%%)\n", tre, (tre / (float)lanci) * 100);
    printf("Quattro: %d (%.2f%%)\n", quattro, (quattro / (float)lanci) * 100);
    printf("Cinque: %d (%.2f%%)\n", cinque, (cinque / (float)lanci) * 100);
    printf("Sei: %d (%.2f%%)\n", sei, (sei / (float)lanci) * 100);

    return 0;
}
