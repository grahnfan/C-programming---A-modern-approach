//
//  main.c
//  8-4
//
//  Created by Erik Grahn on 2017-05-25.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

#define SIZE ((int)(sizeof(a) / sizeof(a[0])))
#define N 10

int main(int argc, const char * argv[]) {
    // insert code here...
    int a[N];
    
    printf("Enter %d numbers: ", N);
    
    for(int i = 0; i < SIZE; i++)
    {
        scanf("%d", &a[i]);
    }
    
    
    printf("In reversed order:");
    for(int i = SIZE-1; i >= 0; i--)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
    return 0;
}
