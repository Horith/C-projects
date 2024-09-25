#include <stdio.h>
#include <stdlib.h>

int main()
{
    float ore, minuti, secondi;
    printf("dimmi le ore: ");
    scanf("%f", &ore);
    secondi = ore * 3600;
    minuti = ore * 60;
    printf("ore : %f\tminuti : %f\tsecondi : %f", ore, minuti, secondi);

}

