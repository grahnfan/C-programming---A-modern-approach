//
//  main.c
//  6-11
//
//  Created by Erik Grahn on 2017-05-13.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    //
    int n;
    float answer = 1;
    float factorial = 1;
    
    printf("Enter an integer n: ");
    scanf("%d", &n);
    
        for(int i = 0; i < n; i++)
        {
            factorial *= (float)1/(1+i);
            answer += factorial;
        }
    
    printf("The mathematical expression is: %f\n", answer);
    
    return 0;
}
