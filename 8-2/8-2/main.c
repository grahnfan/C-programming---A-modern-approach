//
//  main.c
//  8-1
//
//  Created by Erik Grahn on 2017-05-22.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdbool.h>
#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int digit_seen[10] = {false};
    int digit;
    long n;
    
    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0)
    {
        digit = n % 10;
        digit_seen[digit]++;
        n /= 10;
    }
    
    printf("Digit:\t\t");
    for(int i = 0; i <10; i++)
    {
        printf("%3d", i);
    }
    
    printf("\nOccurences:\t");
    for(int i = 0; i < 10; i++)
    {
        printf("%3d", digit_seen[i]);
        
    }
    printf("\n");
  
    
    
    return 0;
}
