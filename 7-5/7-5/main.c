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
    
    while(letter != '\n')
    {
        letter = getchar();
        letter = toupper(letter);
        
        if(letter == 'A' || letter == 'E' || letter == 'I' || letter == 'L' || letter == 'N' || letter == 'O' || letter == 'R' || letter == 'S' || letter == 'T' || letter == 'U')
        {
            sum += 1;
        }
        else if(letter == 'D' || letter == 'G')
        {
            sum += 2;
        }
        else if(letter == 'B' || letter == 'C' || letter == 'M' || letter == 'P')
        {
            sum += 3;
        }
        else if(letter == 'F' || letter == 'H' || letter == 'V' || letter == 'W' || letter == 'Y')
        {
            sum += 4;
        }
        else if(letter == 'K')
        {
            sum += 5;
        }
        else if(letter == 'J' || letter == 'X')
        {
            sum += 8;
        }
        else if(letter == 'Q' || letter == 'Z')
        {
            sum += 10;
        }
        
    }
    
    printf("Scrabble value: %d\n", sum);
    return 0;
}
