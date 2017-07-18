//
//  main.c
//  7-14
//
//  Created by Erik Grahn on 2017-05-19.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    printf("Enter a positive number: ");
    
    double x;
    double y = 1;
    double root;
    
    scanf("%lf", &x);
    

    while(true)
    {
        
        y = (y + (x / y)) / 2;
        if((fabs(y - root)) < (y * 0.00001))
            break;
        root = y;
    }
    
    printf("Square root: %.5f\n", y);
    return 0;
}
