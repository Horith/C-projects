#include <stdio.h>
#include <stdlib.h>

int main() {
    int dividendo, divisore; 
    printf("Inserisci il dividendo: ");
    scanf("%d", &dividendo); 
    printf("Inserisci il divisore: "); 
    scanf("%d", &divisore);

    if (divisore != 0) {
        // Calcolare il risultato come float per ottenere i decimali
        float risultato = (float)dividendo / divisore;

        // Separare la parte intera e decimale
        int parteIntera = dividendo / divisore;
        float parteDecimale = risultato - parteIntera;

        printf("Risultato: %d + %.2f\n", parteIntera, parteDecimale);
    } else {
        printf("Errore: divisione per zero non è permessa.\n");
    }

    return 0;
}
