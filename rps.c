#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(){
    // to clear the console
    printf("pls press enter key");
    getchar();
    system("cls");

    // declare the players score
    int player1_score=0, player2_score=0, player3_score=0;

    // declare the input variables for each rounds
    char round1_player1, round1_player2, round2_player2, 
    round2_player3, round3_player1, round3_player3;


    // get the input from players
    scanf("%c %c",&round1_player1,&round1_player2);
    scanf("\n");
    scanf("%c %c",&round2_player2,&round2_player3);
    scanf("\n");
    scanf("%c %c",&round3_player1,&round3_player3);


    // checking the user inputs are correct or not
    if (toupper(round1_player1)=='R' | toupper(round1_player1)=='P' | toupper(round1_player1)=='S'
        & toupper(round1_player2)=='R' | toupper(round1_player2)=='P' | toupper(round1_player2)=='S' 
        & toupper(round2_player2)=='R' | toupper(round2_player2)=='P' | toupper(round2_player2)=='S'
        & toupper(round2_player3)=='R' | toupper(round2_player3)=='P' | toupper(round2_player3)=='S'
        & toupper(round3_player1)=='R' | toupper(round3_player1)=='P' | toupper(round3_player1)=='S'
        & toupper(round3_player3)=='R' | toupper(round3_player3)=='P' | toupper(round3_player3)=='S'){
    }else{
        printf("Wrong input\n");
    }


    // providing the marks according to the inputs 
    // round 1
    if ( (round1_player1=='P' & round1_player2=='R') | (round1_player1=='R' & round1_player2=='S') | (round1_player1=='S' & round1_player2=='P')){
        player1_score++;
    }else if ((round1_player2=='P' & round1_player1=='R') | (round1_player2=='R' & round1_player1=='S') | (round1_player2=='S' & round1_player1=='P')){
        player2_score++;
    }

    // round 2
    if ( (round2_player2=='P' & round2_player3=='R') | (round2_player2=='R' & round2_player3=='S') | (round2_player2=='S' & round2_player3=='P')){
        player2_score++;
    }else if ((round2_player3=='P' & round2_player2=='R') | (round2_player3=='R' & round2_player2=='S') | (round2_player3=='S' & round2_player2=='P')){
        player3_score++;
    }

    // round 3
    if ( (round3_player1=='P' & round3_player3=='R') | (round3_player1=='R' & round3_player3=='S') | (round3_player1=='S' & round3_player3=='P')){
        player1_score++;
    }else if ((round3_player3=='P' & round3_player1=='R') | (round3_player3=='R' & round3_player1=='S') | (round3_player3=='S' & round3_player1=='P')){
        player3_score++;
    }

    
    // finding the winning possiblities
    if (player1_score>player2_score & player1_score>player3_score | player2_score==player3_score & player1_score>player2_score){
        printf("Player 1 wins");
    }else if (player2_score>player1_score & player2_score>player3_score | player1_score==player3_score & player2_score>player1_score){
        printf("Player 2 wins");
    }else if (player3_score>player1_score & player3_score>player2_score | player1_score==player2_score & player3_score>player1_score){
        printf("Player 3 wins");
    }else if (player1_score==player2_score & player1_score>player3_score){
        printf("Player 1 and player 2 wins");
    }else if (player2_score==player3_score & player2_score>player1_score){
        printf("Player 2 and player 3 wins");
    }else if (player1_score==player3_score & player1_score>player2_score){
        printf("Player 1 and player 3 wins");
    }else if(player1_score==player2_score & player2_score==player3_score){
        printf("Tie");
    }

    return 0;
    
}