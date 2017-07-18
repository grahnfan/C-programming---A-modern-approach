//
//  main.c
//  5-5
//
//  Created by Erik Grahn on 2017-04-23.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter the amount of taxable income: ");
    
    float income, tax_due;
    
    scanf("%f", &income);
    
    if(income < 750)
    {
        tax_due = income * 0.01;
    }
    else if(income >= 750 && income < 2250)
    {
        tax_due = 7.50 + (income - 750) * 0.02;
        
    }
    else if(income >= 2250 && income < 3750)
    {
        tax_due = 37.50 + (income - 2250) * 0.03;
    }
    else if(income >= 3750 && income < 5250)
    {
        tax_due = 82.50 + (income - 3750) * 0.04;
    }
    else if(income >= 5250 && income < 7000)
    {
        tax_due = 142.50 + (income - 5250) * 0.05;
    }
    else if(income >= 7000)
    {
        tax_due = 230.00 + (income - 7000) * 0.06;
    }
    
    printf("The tax due is: %.2f\n", tax_due);
    return 0;
}
