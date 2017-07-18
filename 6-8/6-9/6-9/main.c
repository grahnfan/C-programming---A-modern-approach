//
//  main.c
//  8
//
//  Created by Erik Grahn on 2017-04-13.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Enter amount of loan: ");
    
    float loan = 20000.00;
    //scanf("%f", &loan);
    
    //printf("Enter interest rate: ");
    
    float rate = 6.0;
    //scanf("%f", &rate);
    
    
    //printf("Enter monthly payment: ");
    
    float payment = 386.66;
    //scanf("%f", &payment);
    //printf("Percent is: %f\n", loan*(rate/100/12+1));
    
    printf("Balance remaining after first payment: %.2f\n", (loan*(rate/100/12+1)-payment));
    printf("Balance remaining after second payment: %.2f\n", ((loan*(rate/100/12+1)-payment)) *(rate/100/12+1) -payment);
    printf("Balance remaining after third payment: %.2f\n", (((loan*(rate/100/12+1)-payment)) *(rate/100/12+1) -payment) *(rate/100/12+1)- payment);
    
    return 0;
}
