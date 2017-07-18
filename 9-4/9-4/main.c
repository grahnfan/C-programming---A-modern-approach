//
//  main.c
//  8-16
//
//  Created by Erik Grahn on 2017-06-26.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdbool.h>


void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int firstWord[26] = {0};
    int secondWord[26] = {0};
    
    
    printf("Enter first word: ");
    
    
    read_word(firstWord);
    
    
    
    
    printf("Enter second word: ");
    
    read_word(secondWord);
    
    
    if(equal_array(firstWord,secondWord))
    {
        printf("The words are anagrams.\n");
    }
    else
        printf("The words are not anagrams.\n");
    
    
    return 0;
}


void read_word(int counts[26])
{
    char ch;
    while((ch = getchar()) != '\n')
    {
        if(ch >= 'A' && ch <= 'z')
        {
            ch = tolower(ch);
            ch = ch - 'a';
            counts[ch]++;
        }
    }
}

bool equal_array(int counts1[26], int counts2[26])
{
    for(int i = 0; i < 26; i++)
    {
        if((counts1[i] - counts2[i]) != 0)
        {
            
            return false;
        }
    }
    
    return true;
    
    
}

