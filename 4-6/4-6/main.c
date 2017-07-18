//
//  main.c
//  4-6
//
//  Created by Erik Grahn on 2017-04-22.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter the first 12 digits of an EAN: ");
    
    int i0, i1, i2, i3, i4, i5, j0, j1, j2, j3, j4, j5;
    int first_sum, second_sum, total;
    
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i0,&i1,&i2,&i3,&i4,&i5,&j0,&j1,&j2,&j3,&j4,&j5);
    
    first_sum = i1+i3+i5+j1+j3+j5;
    second_sum = i0+i2+i4+j0+j2+j4;
    total = 3 * first_sum + second_sum;
    
    printf("Check digit: %d\n", 9 - ((total-1) % 10));
    return 0;
}
