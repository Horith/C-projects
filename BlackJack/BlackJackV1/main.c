#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define blackjack  21
int main() {
    srand(time(NULL));
    char replay = 'y';


    while (replay == 'y' || replay == 'Y'){
        printf("\nBlackjakkino? (y/n) \n");
        int carta = pescata();


        printf("\n valore carta: %d", carta);  //temp
        //turno del giocatore
        int UsrScore = UsrTurn();


        //delaer turn


        //comparing scores




      // ask player if wants to replay
      printf("\n I vincenti non mollano mai, giusto? (y/n): ");
      scanf(" %c", &replay);
    }

}
int pescata(){
    int carta = rand() % 13 + 1;
    if (carta > 10 ){
        carta = 10; // make the figure cards worth 10 points
        printf("\n FIGURE!");

    }//in future will add ace card management
    return carta;
}
void stocazzo(int carta){
    printf(" %d", carta);
}
int UsrTurn(){
    int UsrScore = 0;
    char choice;

    while(1){
        int carta = pescata();
         printf("\n you drew: ");
         stocazzo(carta);
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

