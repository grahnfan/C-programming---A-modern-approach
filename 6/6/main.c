//
//  main.c
//  6
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
    
    printf("%.2f\n", ((((3 * x + 2 )* x - 5) * x - 1) * x + 7) * x -6);
    
    return 0;
}
