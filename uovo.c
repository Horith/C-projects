#include <stdio.h>
#include <stdlib.h>
/*
una casalinga compra 24 uova, noto il prezzo del singolo uovo e sapendo che paga
con 20 euro calcolare il resto
*/

const uovaSignora = 24;
const prezzoUovo = 0.80;
int main()
{
    float costo, resto;
    printf("la signora cede 20 euro al cassier* : \n calcolo resto ");
    costo = 0.80 * 24;
    printf("costo = %f", costo);
    resto = 20 - costo;
    printf("\n resto: %f", resto);
    return 0;
}
