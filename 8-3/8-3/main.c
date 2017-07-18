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
    long n, m = 1;
    bool flag = false;
    
  
    while (m > 0)
    {
        printf("Enter a number: ");
        scanf("%ld", &n);
        m = n;
        while(n > 0)
        {
        digit = n % 10;
        if(digit_seen[digit])
        {
            flag = true;
            break;
        }
        digit_seen[digit] = true;
        n /= 10;
        }
        
        if(n > 0)
        {
            printf("Repeated digit(s): \n");
            
        }
        else
            printf("No repeated digit(s)\n");
    }
    

    
   
    
    return 0;
}
