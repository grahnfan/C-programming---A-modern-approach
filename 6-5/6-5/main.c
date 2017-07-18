//
//  main.c
//  6-5
//
//  Created by Erik Grahn on 2017-04-28.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a number: ");
    int number;
    scanf("%d", &number);
    
    printf("The reversal is: ");
    do
    {
        printf("%d", number % 10);
        number = number / 10;
    }while(number != 0);
    
    
    printf("\n");
    return 0;
}
