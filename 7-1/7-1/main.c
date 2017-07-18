//
//  main.c
//  7-1
//
//  Created by Erik Grahn on 2017-05-13.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    // insert code here...
    
    int n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    
    scanf("%d", &n);
    
    for(int i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
        
    }
    // int = long int på min maskin (32 bitar) maxtal att skriva är 46341
    // short int = 16 bitar
    
    return 0;
}
