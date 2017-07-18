//
//  main.c
//  7-10
//
//  Created by Erik Grahn on 2017-05-17.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int length = 0;
    char ch;
    
    printf("Enter a sentence: ");
    
    while(ch != '\n')
    {
        ch = getchar();
        ch = toupper(ch);
        if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        {
            length++;
        }
        
    }
    
    printf("Your sentence contains %d vowels.\n", length);
    
    return 0;
}
