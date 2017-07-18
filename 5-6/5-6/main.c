//
//  main.c
//  5-6
//
//  Created by Erik Grahn on 2017-04-25.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, check_digit, first_sum, second_sum, total;
    
    printf("Enter a UPC code: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &check_digit);
    
    
    first_sum = d + i2 +i4 + j1 +j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    
    if(check_digit == 9 - ((total - 1) % 10))
    {
        printf("VALID\n");
    }
    else
        printf("NOT VALID\n");
    
    
    
    return 0;
}
