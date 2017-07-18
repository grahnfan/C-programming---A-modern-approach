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
    
    char lastname[20];
    
    
    
    
    
    while(ch == ' ')
    {
        ch = getchar();
    }
    first = ch;
    
    
    while (ch != ' ')
    {
        ch = getchar();
    }
    int i = 0;
    
    while (ch != '\n')
    {
        ch = getchar();
        lastname[i] = ch;
        i++;
    }
    
    for(int j = 0; j < i; j++)
    {
        if(lastname[j] != '\n')
            printf("%c", lastname[j]);
    }
    
    printf(", %c.\n", first);
    return 0;
}
