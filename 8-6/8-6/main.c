//
//  main.c
//  8-6
//
//  Created by Erik Grahn on 2017-05-31.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>
#define SIZE 100
#include <ctype.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char letter;
    int counter = 0;
    char message[SIZE];
    
    printf("Enter message: ");
    
    
    while(letter != '\n')
    {
        letter = getchar();
        
        message[counter] = letter;
        counter++;
    }
    
    
    for(int i = 0; i < counter; i++)
    {
        message[i] = toupper(message[i]);
        
        switch (message[i]) {
            case 'A':
                message[i] = '4';
                break;
                
            case 'B':
                message[i] = '8';
                break;
                
            case 'E':
                message[i] = '3';
                break;
                
            case 'I':
                message[i] = '1';
                break;
                
            case 'O':
                message[i] = '0';
                break;
            case 'S':
                message[i] = '5';
                break;
                
            default:
                break;
        }
        
    }
    
    for(int i = 0; i < counter; i++)
    {
    
         if(message[i] != '\n')
             printf("%c", message[i]);
        
       
        
    }
    printf("!!!!!!!!!!\n");
    
    
    return 0;
}
