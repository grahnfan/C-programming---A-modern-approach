//
//  main.c
//  7
//
//  Created by Erik Grahn on 2017-04-13.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>


void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);


int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a dollar amount: ");
    
    int dollar;
    int bills_20 = 0;
    int bills_10 = 0;
    int bills_5 = 0;
    int bills_1 = 0;
    
    scanf("%d", &dollar);
    pay_amount(dollar, &bills_20, &bills_10, &bills_5, &bills_1);
 
    
    printf("$20 bills: %d\n", bills_20);
    printf("$10 bills: %d\n", bills_10);
    printf("$5 bills: %d\n", bills_5);
    printf("$1 bills: %d\n", bills_1);
    
    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
    
    *twenties = dollars / 20;
    *tens = (dollars - (*twenties)*20) / 10;
    *fives = (dollars - (*twenties)*20 - (*tens)*10) / 5;
    *ones = (dollars - (*twenties)*20 - (*tens)*10 - (*fives)*5);
}
