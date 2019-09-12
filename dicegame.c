#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define RAND_MAX=20;

/*
Name: Caleb Alves            Date: 12 Sept., 2019
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
int main()
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

    int credits, wager, player_roll, comp_roll;

    scanf("%d", &credits);

    printf("Nice! You have %d credits\n", &credits);
    printf("\n");
    printf("Please place a bet on this roll...\n");

    scanf("%d", &wager);

    printf("You bet %d credits on this roll.\n", &wager);
    printf("\n");
    printf("Let's play!\n");

    srand(0);
    player_roll = rand();
    comp_roll = rand();

    printf("Player roll: %d            Computer roll: %d\n", player_roll, comp_roll);

    if(player_roll > comp_roll)
    {

    }

    if(player_roll < comp_roll)
    {

    }

    else
    {

    }
}
