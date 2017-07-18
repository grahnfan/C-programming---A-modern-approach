//
//  main.c
//  7-2
//
//  Created by Erik Grahn on 2017-05-14.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    
    scanf("%d", &n);
    getchar();
    
    for(int i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i * i);
        
        if(i % 24 == 0)
        {
            printf("Press Enter to continue...");
            getchar();
        }
        
    }
    
    return 0;
}
