//
//  main.c
//  7-15
//
//  Created by Erik Grahn on 2017-05-19.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a positive integer: ");
    
    int n;
    short factorial = 1;
    
    scanf("%d", &n);
    
    
    for(int i = n; i >0 ; i--)
    {
        factorial *= i;
    }
    
    printf("Factorial of %d: %hd\n", n, factorial);
    
    return 0;
}
