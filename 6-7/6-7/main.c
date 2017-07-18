//
//  main.c
//  6-7
//
//  Created by Erik Grahn on 2017-05-04.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int n, odd, square;
    
    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in table: ");
    scanf("%d", &n);
    
    square = 1;
    odd = 1;
    for(int i = 1; i <= n; i++)
    {
        odd += 2;
        printf("%10d%10d\n", i, square);
        square += odd;
    }
    
 
    
    
    return 0;
}
