#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define RAND_MAX=20;

/*
Name: Caleb Alves, Caleb Honeycutt
Date: 12 Sept., 2019
Program: The Dice Game

Description: This program is designed as a console application
dice game. It functions as follows:

> User is welcomed to the game and game rules are displayed
then user is prompted to enter a positive integer number of credits

> User is prompted to place bet less than or equal to the number
of credits that they have entered.

> Computer rolls two dice by generating a random number for the player
and the computer.

> If the player's number is higher than the computer's then the player
receives that many additional credits.

> If the computer's number is higher than the player's then the player
loses that many credits.

> A win or lose message is displayed, and user is prompted to play
again or quit (unless the user is out of credits, in which case program
terminates).
*/

int funct(int credits);
int main(void)
{
    printf("___________Welcome to The Dice Game___________\n");
    printf("\n");
    printf("GAME RULES:\n");
    printf("\n");
    printf("> You are playing against the computer (me!). The objective is to roll a higher\n");
    printf(" integer value than me. I will be rolling a 20-sided die.\n");
    printf("\n");
    printf("> You will be asked to place a bet before each roll. This bet must be less than or\n");
    printf(" equal to the number of credit(s) you have available to you.\n");
    printf("\n");
    printf("> If you succeed in rolling higher, then you win! I'll give you credits equal to your \n");
    printf(" wager.\n");
    printf("\n");
    printf("> If I roll higher than you, then I get to keep your credits for myself. Don't worry,\n");
    printf(" I'll take good care of them until you want to play again.\n");
    printf("\n");
    printf("> The game is over when you run out of credits or when you close the console window.\n");
    printf("\n");
    printf("Ready to play?\n");
    printf("\n");
    printf("Please enter the number of credits you wish to start with...\n");

    int credits, player_roll, comp_roll;

    scanf("%d", &credits);

    printf("Nice! You have %d credits\n", credits);
    printf("\n");
while(credits>0)
{
    char replay;
    credits = funct(credits);
    printf("Now you have %d credits\n", credits);
    printf("Do you want to play again? Y/N");
    scanf("%d");
    if (replay=='Y')
    {
        main();
    }
    if (replay=='N')
    {
        return;
    }
}
return;
}
int funct(int credits)
{
    int wager;
    printf("Please place a bet on this roll...\n");
    scanf("%d", &wager);
    if(wager>credits)
    {
        printf("Not a valid entry");
        return credits;
    }
    srand(NULL);
    int player_roll=rand();
    int comp_roll=rand();

    printf("Player roll: %d     ---- Computer roll: %d\n", player_roll, comp_roll);
    if(player_roll>comp_roll)
    {
        printf("You win!");
        credits=credits+wager;
        return credits;
    }
    else if(comp_roll>player_roll)
    {
        printf("You lost!");
        credits=credits-wager;
        return credits;
    }
return credits;}
/*while (1)
{

    char replay = 'y';
    while (replay = 'y')
    {

    printf("Please place a bet on this roll...\n");

    scanf("%d", &wager);

    printf("You bet %d credits on this roll.\n", wager);
    printf("\n");
    printf("Let's play!\n");

    srand(NULL);
    player_roll = rand();
    comp_roll = rand();

    printf("Player roll: %d            Computer roll: %d\n", player_roll, comp_roll);

    if(player_roll > comp_roll)
    {
        credits = credits + wager;
        printf("Play again? Y or N\n");
        scanf("%c", &replay);
        printf("You have %d credits\n", credits);

    }

    if(player_roll < comp_roll)
    {
        credits = credits - wager;
        //if(credits >= 0){
         //return;
        //}
        printf("Play again? Y or N\n");
        scanf("%c", &replay);
        printf("You have %d credits\n", credits);
    }

    else
    {
        printf("We tied!  Play again? Y or N\n");
        scanf("%c", &replay);
    }

    if (replay = 'n')
    {
       // return;
    }
    }

}
return;
}
*/
