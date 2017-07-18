//
//  main.c
//  4-2
//
//  Created by Erik Grahn on 2017-04-22.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a three-digit number: ");
    
    int num;
    scanf("%d", &num);
    
    printf("The reversal is: %d%d%d\n", num % 10, num % 100 / 10, num / 100);
    return 0;
}
