//
//  main.c
//  10-2
//
//  Created by Erik Grahn on 2017-07-19.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5


bool straight, flush, four, three, royal;
int pairs;

void read_cards(int[5][2]);
void analyze_hand(int[5][2]);
void print_result(void);


int main(int argc, const char * argv[]) {
    // insert code here...
    //int num_in_rank[NUM_RANKS];
    //int num_in_suit[NUM_SUITS];
    int hand[5][2];
    
    for(;;)
    {
        read_cards(hand);
        analyze_hand(hand);
        print_result();
    }
    return 0;
}

void read_cards(int hand[5][2])
{
    //bool card_exists[NUM_RANKS][NUM_SUITS];
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;
    
 
    while(cards_read < NUM_CARDS)
    {
        bad_card = false;
        printf("Enter a card: ");
        rank_ch = getchar();
        
        switch (rank_ch) {
            case '0': exit(EXIT_SUCCESS);
            case '2': rank = 0; break;
            case '3': rank = 1; break;
            case '4': rank = 2; break;
            case '5': rank = 3; break;
            case '6': rank = 4; break;
            case '7': rank = 5; break;
            case '8': rank = 6; break;
            case '9': rank = 7; break;
            case 't': case 'T': rank = 8; break;
            case 'j': case 'J': rank = 9; break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
                
                
                
            default:
                bad_card = true;
                break;
        }
        
        suit_ch = getchar();
        switch(suit_ch)
        {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
                
            default:
                bad_card = true;
                break;
        }
        
        while((ch = getchar()) != '\n')
        {
            if(ch != ' ')
            {
                bad_card = true;
            }
        }
        
        if(bad_card)
        {
            printf("Bad card; ignored.\n");
        }
       // else if(card_exists[rank][suit])
        //{
        //    printf("Duplicate card; ignored.\n");
        //}
        
        else
        {
            hand[cards_read][0] = rank;
            hand[cards_read][1] = suit;
            cards_read++;
        }
        
        //printf("%d\n", cards_read);
    }
    
   for(int i = 0; i < NUM_CARDS; i++)
    {
        printf("%d", hand[i][0]);
        printf("\t%d\n", hand[i][1]);
    }
   
    
}


void analyze_hand(int hand[5][2])
{
    int num_consec = 0;
    int rank, suit;
    
    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;
    
    
   /*   Check flush   */
    int flush_counter = 0;
    int flush_color = hand[0][1];
    for(int i = 1; i < NUM_CARDS; i++)
    {
        if(flush_color == hand[i][1])
        {
            flush_counter++;
        }
    }
    
    if(flush_counter == 4)
    {
        flush = true;
    }
    
    
    /****************************************/
    
    
    int temp;
    
    for(int i = 0; i < NUM_CARDS; i++)
    {
        for(int j = i+1; j <NUM_CARDS; j++)
        {
            if(hand[i][0] > hand[j][0])
            {
                temp = hand[i][0];
                hand[i][0] = hand[j][0];
                hand[j][0] = temp;
            }
        }
    }
    
    int royal_counter = 0;
    for(int i = 0; i < NUM_CARDS; i++)
    {
        if(hand[i][0] == (8+i))
        {
            royal_counter++;
        }
    }
    
    if((royal_counter == 5) && flush)
        royal = true;
        
    
    //TODO detta borde inte stämma eftersom sekvensen kan vara 0,0,1,2,3,4
    int straight_counter = 0;
    int test1, test2 = 0;
    
    for(int i = 0; i < NUM_CARDS; i++)
    {
        if(((hand[i][0]+1) == hand[i+1][0]))
        {
            test1++;
            straight_counter++;
        }
    }
    
    if((hand[0][0] == 0) && (hand[4][0] == 12))
    {
        test2++;
        straight_counter++;
    }
    
    

    if((straight_counter == 4) && (royal != true))
        straight = true;
        
    //printf("\nTest1 = %d\n", test1);
    //printf("\nTest2 = %d\n", test2);
    
    int run;
    int card = 0;
    while (card < NUM_CARDS) {
        rank = hand[card][0];
        run = 0;
        do {
            run++;
            card++;
        } while (card < NUM_CARDS && hand[card][0] == rank);
        switch (run) {
            case 2: pairs++;      break;
            case 3: three = true; break;
            case 4: four = true;  break;
        }
    }
    
    
    
 /*
    for(rank = 0; rank < NUM_RANKS; rank++)
    {
        if(num_in_rank[rank] == 4) four = true;
        if(num_in_rank[rank] == 3) three = true;
        if(num_in_rank[rank] == 2) pairs++;
    }*/
    
}

void print_result(void)
{
    if(royal) printf("Royal flush");
    else if(straight && flush) printf("Straight flush");
    else if(four) printf("Four of a kind");
    else if(three && pairs == 1) printf("Full house");
    else if(flush) printf("Flush");
    else if(straight) printf("Straight");
    else if(three) printf("Three of a kind");
    else if(pairs == 2) printf("Two pairs");
    else if(pairs == 1) printf("Pair");
    else printf("High card");
    
    printf("\n\n");
    
}
