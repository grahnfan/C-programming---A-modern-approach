//
//  main.c
//  4
//
//  Created by Erik Grahn on 2017-04-13.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter an amount: ");
    
    float value;
    scanf("%f", &value);
    
    printf("With tax added: $%.2f\n", value * 1.05);
    
    return 0;
}
