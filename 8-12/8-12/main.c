//
//  main.c
//  7-5
//
//  Created by Erik Grahn on 2017-05-16.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a word: ");
    
    char letter;
    int sum = 0;
    char scrabble[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
    
    
    while(letter != '\n')
    {
        letter = getchar();
        letter = toupper(letter);
        
        sum += scrabble[letter-65];
        
        
    }
    
    printf("Scrabble value: %d\n", sum);
    return 0;
}
