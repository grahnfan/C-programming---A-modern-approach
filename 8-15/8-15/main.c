//
//  main.c
//  8-15
//
//  Created by Erik Grahn on 2017-06-26.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char message[80];
    int shift;
    
    printf("Enter message to be encrypted: ");
    
    int i = 0;
    while(message[i] != '\n')
    {
        message[i] = getchar();
        if(message[i] == '\n')
            break;
        i++;
    }
    
    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift);
    
    
    for(int k = 0; k < i; k++)
    {
        if(message[k] >= 'A' && message[k] <= 'Z')
        {
            message[k] = ((message[k] - 'A') + shift) % 26 + 'A';
        
        }
        else if(message[k] >= 'a' && message[k] <= 'z')
        {
            message[k] = ((message[k] - 'a') + shift) % 26 + 'a';
        }
        
    }
    
    
    for(int j = 0; j < i; j++)
    {
        printf("%c", message[j]);
    }
    
    printf("\n");
    return 0;
}
