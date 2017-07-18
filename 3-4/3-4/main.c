//
//  main.c
//  3-4
//
//  Created by Erik Grahn on 2017-04-20.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    
    int first, mid, last;
    
    scanf("(%d) %d-%d", &first, &mid, &last);
    printf("\nYou entered %d.%d.%d\n", first, mid, last);
    
    
    return 0;
}
