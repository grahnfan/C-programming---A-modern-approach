//
//  main.c
//  5-1
//
//  Created by Erik Grahn on 2017-04-23.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a number: ");
    
    int number;
    int digit;
    scanf("%d", &number);
    
    if(number >= 0 && number <= 9)
    {
        digit = 1;
    }
    else if(number >= 10 && number <= 99)
    {
        digit = 2;
    }
    else if(number >= 100 && number <= 999)
    {
        digit = 3;
    }
    
    printf("\nThe number %d has %d digits\n", number, digit);
    return 0;
    
    
    
    
}
