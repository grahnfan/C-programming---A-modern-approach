//
//  main.c
//  4-3
//
//  Created by Erik Grahn on 2017-04-22.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a three-digit number: ");
    
    int num1, num2, num3;
    scanf("%1d%1d%1d", &num1, &num2, &num3);
    
    printf("The reversal is: %1d%1d%1d\n", num3, num2, num1);
    return 0;
}
