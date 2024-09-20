#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define blackjack  21

int pescata();

int main() {
    srand(time(NULL));
    char continui;
    int carta, somma= 0;

    /*
    for(int i=1; i<=50; i++)
    {
      carta= pescata();
      printf(" - MAIN %d", carta);
    }
    */
    do
    {
      carta= pescata();
      printf(" - MAIN %d    -->  ", carta);
      somma += carta; // somma= somma + carta;
      printf(" somma= %d \n", somma);
      printf("continui (y/n) ? ");
      continui= getche();
    }
    while( continui=='y');
    /*
    while (replay == 'y' || replay == 'Y'){
        printf("\nBlackjakkino? (y/n) \n");
        int carta = pescata();


        printf("\n valore carta: %d", carta);  //temp
        //turno del giocatore
        int UsrScore = UsrTurn();


        //dealer turn


        //comparing scores




      // ask player if wants to replay
      printf("\n I vincenti non mollano mai, giusto? (y/n): ");
      scanf(" %c", &replay);
    }
    */
}
int pescata()
{
    int carta = rand() % 13 + 1; // da 1 a 13
    printf("\n %d", carta);
    if (carta > 10 )
    {   carta = 10; // make the figure cards worth 10 points
        printf("--> FIGURA! ");
    }//in future will add ace card management
    return carta;
}
void valoreCarta(int carta){
    printf(" %d", carta);
}
int UsrTurn(){
    int UsrScore = 0;
    char choice;

    while(1){
         int carta = pescata();
         printf("\n you drew: ");
         valoreCarta(carta);
         UsrScore += carta;
         printf("\n your total score right now is: %d", UsrScore);
    if (UsrScore > blackjack){
        printf("\n player busted!");
        break;
        }
    printf("\n wanna hit or stand? (h/s) ");
    scanf(" %c", &choice);

    if(choice == 's' || choice == 'S'){
        break;
    }
    return UsrScore;
   }
 }

