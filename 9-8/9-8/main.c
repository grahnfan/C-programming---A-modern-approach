//
//  main.c
//  9-8
//
//  Created by Erik Grahn on 2017-07-07.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

int roll_dice(void);
bool play_game(void);

int main(int argc, const char * argv[]) {
    
    srand(time(NULL));
    // insert code here...
    char ch;
    int wins = 0;
    int losses = 0;
    
        if(play_game())
        {
            printf("You win!\n");
            wins++;
        }
        else
        {
            printf("You lose!\n");
            losses++;
        }
    
    printf("\nPlay again? ");
    scanf("%c", &ch);
    
    while(ch == 'Y' || ch == 'y')
    {
        
        if(play_game())
        {
            printf("You win!\n");
            wins++;
        }
        else
        {
            printf("You lose!\n");
            losses++;
        }
        
        printf("\nPlay again? ");
        scanf(" %c", &ch);
        
    }
    
    printf("Wins: %d  Losses: %d\n", wins, losses);

    return 0;
}

int roll_dice(void)
{
    int dice1, dice2;
    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;
    
    return dice1 + dice2;
}

bool play_game(void)
{
    int rollDice, point;
    
    rollDice = roll_dice();
    point = rollDice;
    
    printf("You rolled: %d\n", rollDice);
    printf("Your point is %d\n", point);
    
    while(true)
    {
        rollDice = roll_dice();
        printf("You rolled: %d\n", rollDice);
        
        if(rollDice == 7 || rollDice == 11 || rollDice == point)
        {
            return true;
        }
        else if(rollDice == 2 || rollDice == 3 || rollDice == 12)
        {
            return false;
        }
        
        
    }
}
