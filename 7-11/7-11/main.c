//
//  main.c
//  7-11
//
//  Created by Erik Grahn on 2017-05-18.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a first and last name: ");
    
    char ch = ' ';
    char first = '\0';
    

    
    
    while(ch == ' ')
    {
      ch = getchar();
    }
    first = ch;
    
    
    while (ch != ' ')
    {
        ch = getchar();
    }
    
    while (ch != '\n')
    {
        ch = getchar();
        
        if(ch != ' ' && ch != '\n')
            printf("%c", ch);
    }
    
  
    printf(", %c.\n", first);
    return 0;
}
