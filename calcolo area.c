#include <stdio.h>
#include <stdlib.h>
#define pi  3.1415
const int RAGGIO = 10;
int main()
{
    float area; //inizializzo variabile area
    printf("calcolo area del cerchio \n"); // scrivo sullo schermo "calcolo area del cerchio " andando a capo alla fine
    area = RAGGIO * RAGGIO * pi; //eseguo i semplici calcoli per calcolare l'area 
    printf("valore :\tarea = %f, pi = %f, RAGGIO= %d \n", area, pi, RAGGIO); // scrivo i valori separandoli con un tab all'inizio
}
