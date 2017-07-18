//
//  main.c
//  7-13
//
//  Created by Erik Grahn on 2017-05-19.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a sentence: ");
    
    char ch;
    int len = 0;
    int words = 1;
    
    while((ch = getchar()) != '\n')
    {
        if(ch != ' ')
        {
            len++;
        }
        else
            words++;
    }
    
    printf("Average word length: %.1f\n", (float)len/words);
    
    return 0;
}
