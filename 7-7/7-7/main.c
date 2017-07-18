//
//  main.c
//  3-6
//
//  Created by Erik Grahn on 2017-04-21.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter two fractions separated by a plus sign: ");
    
    int first, second, third, fourth, final;
    char operation;
    scanf("%d/%d%c%d/%d", &first, &second, &operation, &third, &fourth);
    
    
    
    if(operation == '+')
    {
        final = (first/second) + (third/fourth);
    }
    else if(operation == '-')
    {
        final = (first/second) - (third/fourth);
    }
    else if(operation == '/')
    {
        final = (first/second) / (third/fourth);
    }
    else if(operation == '*')
    {
        final = (first/second) * (third/fourth);
    }

    
    printf("The answer is %d\n", final );
    
    return 0;
}
