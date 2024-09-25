#include <stdio.h>
#include <stdlib.h>
#define pi  3.1415
int main()
{
    float raggio, diametro, area; //inizializzo variabili
    printf("inserire raggio : \n"); // scrivo sullo schermo "inserire raggio" e vado a capo 
    scanf("%f", &raggio); // attendo input utente del raggio
    printf("\n il raggio è : %f", raggio); //scrivo sullol schermo...
    diametro = raggio * raggio; //eseguo calcoli basici
    printf("\n il diametro è : %f", diametro); //scrivo sullo schermo...
    area = pi * diametro; //eseguo calcoli basici 
    printf("\n l'area è : %f", area); //scrivo sullo schermo 
    return 0;
}
