//
//  main.c
//  9-6
//
//  Created by Erik Grahn on 2017-07-07.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int compute_polynom(int x);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a value for x: ");
    
    int x;
    scanf("%d", &x);
    
    printf("%d\n",compute_polynom(x));
    
    return 0;
}

int compute_polynom(int x)
{
    
    return (3 * pow(x, 5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6);
    
    
}
