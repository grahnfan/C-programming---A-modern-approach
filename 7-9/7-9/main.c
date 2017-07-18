//
//  main.c
//  7-9
//
//  Created by Erik Grahn on 2017-05-17.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int hour, minute;
    char time;
    
    printf("Enter a 12-hour time: ");
    
    scanf("%d:%d %c", &hour, &minute, &time);
    
    if(time == 'P')
    {
        hour = hour + 12;
    }
    
    printf("Equivalent 24-hour time: %d:%d\n", hour, minute);
    return 0;
}
