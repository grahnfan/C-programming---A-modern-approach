//
//  main.c
//  6-6
//
//  Created by Erik Grahn on 2017-05-03.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a number n: ");
    
    int n;
    int even = 2;
    scanf("%d", &n);
    
    int square = 2;
    int number;
    for(int i = 0; i < n; i++)
    {
        number = square * even;
        if(number > n)
            break;
        printf("%d\n", number);
        square += 2;
        even += 2;
  
        
    }
    
    return 0;
}
