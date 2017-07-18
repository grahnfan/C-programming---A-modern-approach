//
//  main.c
//  6-3
//
//  Created by Erik Grahn on 2017-04-28.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a fraction: ");
    
    int numerator, denominator, remainder, m, n;
    
    scanf("%d/%d", &numerator, &denominator);
    m = numerator;
    n = denominator;
    
    while (n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
    }
    
    printf("In lowest terms: %d/%d\n", numerator / m, denominator / m);
    return 0;
}
