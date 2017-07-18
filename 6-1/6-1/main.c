//
//  main.c
//  6-1
//
//  Created by Erik Grahn on 2017-04-28.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    printf("Enter a number: ");
    
    float n;
    float largest_number = 0;
    scanf("%f", &n);
    
    while(n > 0)
    {
        
        printf("Enter a number: ");
        
        float number;
        
        scanf("%f", &number);
        
        if(number > largest_number)
        {
            largest_number = number;
        }
        
        n = number;
        
    }
    
    printf("The largest number entered was %f\n", largest_number);
    
    
    return 0;
}
