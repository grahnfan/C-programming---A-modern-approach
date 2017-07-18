//
//  main.c
//  3-2
//
//  Created by Erik Grahn on 2017-04-20.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter item number: ");
    
    int itemNumber;
    scanf("%d", &itemNumber);
    
    printf("Enter unit price: ");
    
    float unitPrice;
    scanf("%f", &unitPrice);
    
    printf("Enter purchase date (mm/dd/yyyy): ");
    
    int day, month,year;
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("Item\t\t\t\tUnit\t\t\t\tPurchase\n");
    printf("\t\t\t\tPrice\t\t\tDate\n");
    printf("%d\t\t\t\t$%7.2f\t\t\t%d\/%d\/%d\n", itemNumber, unitPrice, month, day, year);
    return 0;
}
