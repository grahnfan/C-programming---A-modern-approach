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
    
    
    bool digit_seen[10] = {false};
    int digit;
    bool repeated_digit[10] = {false};
    long n;
    bool flag = false;
    
    printf("Enter a number: ");
    scanf("%ld", &n);
    
    while (n > 0)
    {
        digit = n % 10;
        if(digit_seen[digit])
        {
            repeated_digit[digit] = true;
        }
        digit_seen[digit] = true;
        n /= 10;
    }
    
    for(int i = 0; i <10; i++)
    {
        if(repeated_digit[i])
            flag = true;
    }
    
    if(flag)
    {
        printf("Repeated digit(s): ");
        for(int i = 0; i < 10; i++)
        {
            if(repeated_digit[i])
                printf("%d ", i);
        }
        printf("\n");
        
    }
    else
        printf("No repeated digit(s)\n");
    
    return 0;
}
