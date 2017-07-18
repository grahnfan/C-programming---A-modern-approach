//
//  main.c
//  6-2
//
//  Created by Erik Grahn on 2017-04-28.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter two integers: ");
    
    int m, n, remainder;
    
    scanf("%d %d", &m, &n);
    
    while(n != 0)
    {
        remainder = m % n;
        m = n;
        n = remainder;
        
        
    }
    
    printf("Greatest common divisor: %d\n", m);
    return 0;
}
