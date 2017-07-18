//
//  main.c
//  9-7
//
//  Created by Erik Grahn on 2017-07-07.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int power(int x, int n);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int x, n;
    
    printf("Enter a value for x and n\n");
    printf("x: ");
    scanf("%d", &x);
    
    printf("n: ");
    scanf("%d", &n);
    
    printf("%d\n", power(x, n));
    
    return 0;
}


int power(int x, int n)
{
    if(n == 0)
    {
        return 1;
    }
    
    if(n % 2 == 0)
    {
        return power(x, n/2)*2;
    }
    else 
    {
        return x * power(x, n -1);
    }
    
    
}
