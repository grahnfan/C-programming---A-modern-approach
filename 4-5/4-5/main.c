//
//  main.c
//  4-5
//
//  Created by Erik Grahn on 2017-04-22.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter the first 11 digits of a UPC: ");
    
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5;
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5);
    
    printf("Check digit: %d\n", 9 - (((3 * (d+i2+i4+j1+j3+j5) + (i1+i3+i5+j2+j4))-1) % 10));
    
    return 0;
}
