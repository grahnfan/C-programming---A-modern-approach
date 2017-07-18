//
//  main.c
//  6-12
//
//  Created by Erik Grahn on 2017-05-13.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    float n;
    float answer = 1;
    float factorial = 1;
    int i = 0;
    
    printf("Enter a small term (floating-point): ");
    scanf("%f", &n);
    
    while(answer >= n)
    {
    
        factorial *= (float)1/(1+i);
        answer -= factorial;
        
        
        
        i++;
        
    }
    printf("The mathematical expression is: %f\n", answer);
    return 0;
}
