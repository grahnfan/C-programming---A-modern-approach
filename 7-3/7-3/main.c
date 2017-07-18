//
//  main.c
//  7-3
//
//  Created by Erik Grahn on 2017-05-15.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    double n , sum = 0;
    printf("This program sums a series of double values.\n");
    printf("Enter double values (0 to terminate): ");
    
    scanf("%lf", &n);
    while(n != 0)
    {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %lf\n", sum);
    return 0;
}
