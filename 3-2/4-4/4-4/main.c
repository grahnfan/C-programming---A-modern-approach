//
//  main.c
//  4-4
//
//  Created by Erik Grahn on 2017-04-22.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a number between 0 and 32767: ");
    
    int number, nr1, nr2, nr3, nr4;
    
    scanf("%d", &number);
    
    nr1 = number / 8;
    nr2 = nr1 / 8;
    nr3 = nr2 / 8;
    nr4 = nr3 / 8;
    
    
    printf("In octal, you number is: %d%d%d%d%d\n", (nr4 % 8), (nr3 % 8), (nr2 % 8), (nr1 % 8), (number % 8));
    
    return 0;
}
