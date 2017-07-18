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

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    int firstWord[26] = {0};
    int secondWord[26] = {0};
    
    char ch;
    int sum = 0;
    
    printf("Enter first word: ");
    
    
    while((ch = getchar()) != '\n')
    {
        if(ch >= 'A' && ch <= 'z')
        {
            ch = tolower(ch);
            ch = ch - 'a';
            firstWord[ch]++;
        }
    }
    
   /* for(int i = 0; i < 26; i++)
    {
        printf("%d ", firstWord[i]);
    }
    */
    
    
    printf("Enter second word: ");
    while((ch = getchar()) != '\n')
    {
        if(ch >= 'A' && ch <= 'z')
        {
            ch = tolower(ch);
            ch = ch - 'a';
            secondWord[ch]--;
        }
    }
    /*
    for(int i = 0; i < 26; i++)
    {
        printf("%d ", secondWord[i]);
    }
    */
  
    
    for(int i = 0; i < 26; i++)
    {
        if((firstWord[i] + secondWord[i]) != 0)
        {
            printf("The words are not anagrams.\n");
            exit(EXIT_SUCCESS);
        }
    }
    
    
    printf("The words are anagrams.\n");

        
    
    
    return 0;
}
