//
//  main.c
//  8-14
//
//  Created by Erik Grahn on 2017-06-25.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    char sentence[100];
    char ch = '\0';
    
    printf("Enter a sentence: ");
    
    int i = 0;
    
    while(sentence[i] != '\n')
    {
        
        sentence[i] = getchar();
        
        if(sentence[i] == '?' || sentence[i] == '.' || sentence[i] == '!')
        {
            ch = sentence[i];
            break;
        }
        
        i++;
    }
 
    printf("Reversal of sentence: ");
    
    for(int j = i; j >=0; j--)
    {
        if(sentence[j] == ' ' || j == 0)
        {
            int k = j+1;
            if(j == 0)
                k = j;
            
            while(sentence[k] != ' ' && k < i)
            {
                printf("%c", sentence[k]);
                k++;
            }
            
            if(j != 0)
                printf(" ");
        }
        
    }
    printf("%c\n", ch);
    
    return 0;
}
