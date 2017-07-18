//
//  main.c
//  8-9
//
//  Created by Erik Grahn on 2017-06-01.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void generate_random_walk(char[10][10]);
void print_array(char[10][10]);

int main(int argc, const char * argv[]) {
    // insert code here...
   


    //bool walk[10][10] = {false};
    char random_walk[10][10];
    
    
    
    srand(time(NULL));
    
    generate_random_walk(random_walk);
    print_array(random_walk);
    
    
    return 0;
}

void generate_random_walk(char walk[10][10])
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            walk[i][j] = '.';
        }
    }
    

    int counter = 0;
    int number;
    int i = 0;
    int j = 0;

    walk[0][0] = 'A';

    while(counter < 25)
    {
    
        number = rand()%4;
        //printf("%d = ", number);
    
        //printf("%d\t\t%d\n", counter, number);
    
    if(number == 0 && i < 10 && (walk[i+1][j] == '.'))
    {
        //printf("Hej0\n");
        i++;
        counter++;
        walk[i][j] = 'A' + counter;
            }
    else if(number == 1 && i > 0 && (walk[i-1][j] == '.'))
    {
        //printf("Hej1\n");
        i--;
        counter++;
        walk[i][j] = 'A' + counter;
        
    }
    else if(number == 2 && j > 0 && (walk[i][j-1] == '.'))
    {
        //printf("Hej2\n");
        j--;
        counter++;
        walk[i][j] = 'A' + counter;
        
    }
    else if(number == 3 && j < 9 && (walk[i][j+1] == '.'))
    {
        //printf("Hej3\n");
        j++;
        counter++;
        walk[i][j] = 'A' + counter;
       
    }
    
    if(((walk[i+1][j] != '.') || (i == 9)) &&
       ((walk[i-1][j] != '.') || (i == 0)) &&
       ((walk[i][j+1] != '.') || (j == 9)) &&
       ((walk[i][j-1] != '.') || (j == 0)))
    {
        break;
    }
}
    
}


void print_array(char walk[10][10])
{
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%c ", walk[i][j]);
        }
        printf("\n");
    }
    
}
