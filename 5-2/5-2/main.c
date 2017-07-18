//
//  main.c
//  5-2
//
//  Created by Erik Grahn on 2017-04-23.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a 24-hour time: ");
    
    int hour, minute;
    
    scanf("%d:%d", &hour, &minute);
    
    switch(hour)
    {
        case 13:
            hour = 1;
            break;
        case 14:
            hour = 2;
            break;
        case 15:
            hour = 3;
            break;
        case 16:
            hour = 4;
            break;
        case 17:
            hour = 5;
            break;
        case 18:
            hour = 6;
            break;
        case 19:
            hour = 7;
            break;
        case 20:
            hour = 8;
            break;
        case 21:
            hour = 9;
            break;
        case 22:
            hour = 10;
            break;
        case 23:
            hour = 11;
            break;
        case 24:
            hour = 12;
            break;
            
    }
    
    
    printf("Equivalent 12-hour time: %d:%.2d\n", hour, minute);
    
    return 0;
}
