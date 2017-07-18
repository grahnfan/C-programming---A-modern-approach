//
//  main.c
//  5-7
//
//  Created by Erik Grahn on 2017-04-25.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int i1, i2, i3, i4, largest1, smallest1, largest2, smallest2;
    
    printf("Enter four integers: ");
    
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);
    
    if(i1 > i2)
    {
        largest1 = i1;
        smallest1 = i2;
    }
    else
    {
        largest1 = i2;
        smallest1 = i1;
    }
    if(i3 > i4)
    {
        largest2 = i3;
        smallest2 = i4;
    }
    else
    {
        largest2 = i4;
        smallest2 = i3;
    }
    if(largest1 < largest2)
    {
        largest1 = largest2;
    }
    if(smallest1 > smallest2)
    {
        smallest1 = smallest2;
    }
    
    printf("Largest: %d\n", largest1);
    printf("Smallest: %d\n", smallest1);
    
    return 0;
}
