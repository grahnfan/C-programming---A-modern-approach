//
//  main.c
//  7-4
//
//  Created by Erik Grahn on 2017-05-16.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>
#include <ctype.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter phone number: ");
    
    char number;
    while(number != '\n')
    {
        number = getchar();
        number = toupper(number);
     
        if(number == 'A' || number == 'B' || number == 'C')
        {
            number = 2;
        }
        else if(number == 'D' || number == 'E' || number == 'F')
        {
            number = 3;
        }
        else if(number == 'G' || number == 'H' || number == 'I')
        {
            number = 4;
        }
        else if(number == 'J' || number == 'K' || number == 'L')
        {
            number = 5;
        }
        else if(number == 'M' || number == 'N' || number == 'O')
        {
            number = 6;
        }
        else if(number == 'P' || number == 'R' || number == 'S')
        {
            number = 7;
        }
        else if(number == 'T' || number == 'U' || number == 'V')
        {
            number = 8;
        }
        else if(number == 'W' || number == 'X' || number == 'Y')
        {
            number = 9;
        }
        
        if(number != '\n' && number >= 2 && number <= 9)
            printf("%d", number);
        else
            printf("%c", number);
    }
    
    
    
    return 0;
}
