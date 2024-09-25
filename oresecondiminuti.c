#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ore, minuti, secondi, secondiMinuti, secondiOre;
    printf("dimmi le ore: ");
    scanf("%d", &ore);
    printf("dimmi i minuti: ");
    scanf("%d", &minuti);
    printf("dimmi i secondi: ");
    scanf("%d", &secondi);
    secondiOre = ore * 3600;
    secondiMinuti = minuti * 60;
    secondi = secondiMinuti + secondiOre + secondi;
    printf("secondi tot : %d", secondi);



}
