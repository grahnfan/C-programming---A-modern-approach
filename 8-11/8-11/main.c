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
    
    char phoneNumber[15];
    char number;
    int counter = 0;
    
    while(number != '\n')
    {
        number = getchar();
        number = toupper(number);
        
        if(number == 'A' || number == 'B' || number == 'C')
        {
            phoneNumber[counter] = '2';
        }
        else if(number == 'D' || number == 'E' || number == 'F')
        {
            phoneNumber[counter] = '3';
        }
        else if(number == 'G' || number == 'H' || number == 'I')
        {
            phoneNumber[counter] = '4';
        }
        else if(number == 'J' || number == 'K' || number == 'L')
        {
            phoneNumber[counter] = '5';
        }
        else if(number == 'M' || number == 'N' || number == 'O')
        {
            phoneNumber[counter] = '6';
        }
        else if(number == 'P' || number == 'R' || number == 'S')
        {
            phoneNumber[counter] = '7';
        }
        else if(number == 'T' || number == 'U' || number == 'V')
        {
            phoneNumber[counter] = '8';
        }
        else if(number == 'W' || number == 'X' || number == 'Y')
        {
            phoneNumber[counter] = '9';
        }
        else
        {
            phoneNumber[counter] = number;
        }
        
        counter++;
       
    }
    
    printf("In numeric form: ");
    
    for(int i = 0; i < counter; i++)
    {
        printf("%c", phoneNumber[i]);
    }
    
    
    
    return 0;
}
