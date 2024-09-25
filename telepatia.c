#include <stdio.h>
#include <stdlib.h>
#define uov
/*
numero telepatico
raddoppio
somma
dividi
sottrai


*/
int main()
{
    int inputG, numcpu;  //input del giocatore, numero calcolato dalla cpu
    printf("introduci il numero che hai pensato: \n");
    scanf("%d", &inputG);
    printf("raddoppia il numero...\n");
    numcpu = inputG * 2;
    printf("somma il numero per 12...\n");
    numcpu = numcpu + 12;
    printf("dividi il numero per 2...\n");
    numcpu = numcpu / 2;
    printf("sottrai il numero per quello che avevi pensato...\n");
    numcpu = numcpu - inputG;
    //comunica del risultato
    printf("\ in ogni caso il numero finale è 6!\n ");
    printf("numero dei calcoli: %d", numcpu);
}

