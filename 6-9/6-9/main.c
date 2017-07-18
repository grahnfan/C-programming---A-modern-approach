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
    printf("Enter amount of loan: ");
    
    float loan = 20000.00;
    scanf("%f", &loan);
    
    printf("Enter interest rate: ");
    
    float rate = 6.0;
    scanf("%f", &rate);
    
    
    printf("Enter monthly payment: ");
    
    float payment;
    scanf("%f", &payment);
    //printf("Percent is: %f\n", loan*(rate/100/12+1));
    printf("Enter the number of payments: ");
    
    int number_payments;
    scanf("%d", &number_payments);
    
    float balance = (loan*(rate/100/12+1)-payment);
    float tmp = (rate/100/12+1);
    
    for (int i = 0; i < number_payments; i++) {
        
    
        printf("Balance remaining after %d payment: %.2f\n", i+1, balance);
        
        balance = balance * tmp -payment;
        
       
        
    }
    
    printf("Balance remaining after first payment: %.2f\n", loan*tmp-payment);
    printf("Balance remaining after second payment: %.2f\n", (loan*tmp-payment) * tmp -payment);
    printf("Balance remaining after third payment: %.2f\n", ((loan*tmp-payment) * tmp -payment) *tmp- payment);
    
    return 0;
}
