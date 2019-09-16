#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define RAND_MAX=20
#define WON 0
#define LOSE 1


int rollDice(void);
void playGame(int credits, int replay);
void startGame(void);
int calculateCredits(int wager, int credits, int computer_roll, int user_roll);

int rollDice(void)
{
    return ((rand() % 6) +1);
}

int main(void)
{
    int dice = 0;
    int result;
    int credits;
    int wager;
    time_t t;
    int replay;
    srand(time(&t)); //initializer for the random seed
    printf("Let's play a dice game!");
    printf("\n");
    printf("Would you like to play? 1=Yes, 0=No\n");
    scanf("%i", &replay);
    if (replay==0)
    {
        printf("Quitter :(");
        return;
    }
    else if (replay==1)
    {
        startGame();
    }

}

void startGame(void)
{
    printf("Please enter the amount of credits to wager...");
    int credits;
    scanf("%i", &credits);
    int replay;
    printf("You chose to bet: %d", credits);
    playGame(credits, replay);
    return;
}

void playGame(int credits, int replay)
{
    printf("Please enter the amount you would like to wager, must be less than %d", credits);
    int wager=0;
    do
    {
        scanf("%d", &wager);
        if (wager>credits)
        {
            wager = 0;
            printf("You do not have enough credits for that wager, please try again\n");
        }
        else if (wager<= credits)
        {
            int comp_roll=rollDice();
            int user_roll=rollDice();
            printf("I rolled a %d and you rolled a %d\n", comp_roll, user_roll);
            credits = calculateCredits(credits,wager,comp_roll,user_roll);
            if (credits>0)
            {
                printf("Would you like to play again? 0=No 1=Yes\n");
                scanf("%d", &replay);
            }
            else if (credits<=0)
            {
                printf("You lose!!");
                replay=0;
            }
        }
    }
    while (replay==1);
    return;
}
int calculateCredits(int credits,int wager,int computer_roll,int user_roll)
{
    if(computer_roll>user_roll)
    {
        printf("You lose! I'll be taking those credits");
        credits = credits-wager;
        return(credits);
    }
    else if(user_roll>computer_roll)
    {
        printf("You win! Dangit!");
        credits = credits+wager;
        return(credits);
    }
}
