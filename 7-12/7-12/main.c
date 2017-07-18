//
//  main.c
//  7-12
//
//  Created by Erik Grahn on 2017-05-19.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter an expression: ");
    
    char ch, ch2;
    float operand1, operand2, operand3;
    float answer = 0;
    
    
    scanf("%f%c%f%c%f", &operand1, &ch, &operand2, &ch2, &operand3);
    
    
    
    if(ch == '+')
    {
        answer = operand1 + operand2;
    }
    else if(ch == '-')
    {
        answer = operand1 - operand2;
    }
    else if(ch == '/')
    {
        answer = operand1 / operand2;
    }
    else if(ch == '*')
    {
        answer = operand1 * operand2;
    }
    
    
    if(ch2 == '+')
    {
        answer = answer + operand3;
    }
    else if(ch2 == '-')
    {
        answer = answer - operand3;
    }
    else if(ch2 == '/')
    {
        answer = answer / operand3;
    }
    else if(ch2 == '*')
    {
        answer = answer * operand3;
    }
    
    printf("Value of expression: %.1f\n", answer);
    
    
    
    return 0;
}
