//
//  main.c
//  5
//
//  Created by Erik Grahn on 2017-04-13.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a value for x: ");
    
    float x;
    scanf("%f", &x);
    
    printf("%.2f\n", 3 * (x*x*x*x*x) + 2 * (x*x*x*x) - 5 * (x*x*x) - (x*x) + 7 * x -6);
    
    return 0;
}
