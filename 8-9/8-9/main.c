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

int main(int argc, const char * argv[]) {
    // insert code here...
    int number;
    int i = 0;
    int j = 0;
    int counter = 0;
    bool walk[10][10] = {false};
    
    srand(time(NULL));
    
   
    
  
    

        
        
    
    char random_walk[10][10] = {'.','.','.','.','.','.','.','.','.','.',
                                '.','.','.','.','.','.','.','.','.','.',
                                '.','.','.','.','.','.','.','.','.','.',
                                '.','.','.','.','.','.','.','.','.','.',
                                '.','.','.','.','.','.','.','.','.','.',
                                '.','.','.','.','.','.','.','.','.','.',
                                '.','.','.','.','.','.','.','.','.','.',
                                '.','.','.','.','.','.','.','.','.','.',
                                '.','.','.','.','.','.','.','.','.','.',
                                '.','.','.','.','.','.','.','.','.','.'};
   

    random_walk[0][0] = 'A';
    
    while(counter < 25)
    {
       
        number = rand()%4;
        //printf("%d = ", number);
        
         printf("%d\t\t%d\n", counter, number);
    
        if(number == 0 && i < 10 && (random_walk[i+1][j] == '.'))
        {
            //printf("Hej0\n");
            i++;
            counter++;
            random_walk[i][j] = 'A' + counter;
            for(int i = 0; i < 10; i++)
            {
                for(int j = 0; j < 10; j++)
                {
                    printf("%c ", random_walk[i][j]);
                }
                printf("\n");
            }
        }
        else if(number == 1 && i > 0 && (random_walk[i-1][j] == '.'))
        {
            //printf("Hej1\n");
            i--;
            counter++;
            random_walk[i][j] = 'A' + counter;
            for(int i = 0; i < 10; i++)
            {
                for(int j = 0; j < 10; j++)
                {
                    printf("%c ", random_walk[i][j]);
                }
                printf("\n");
            }
        }
        else if(number == 2 && j > 0 && (random_walk[i][j-1] == '.'))
        {
            //printf("Hej2\n");
            j--;
            counter++;
            random_walk[i][j] = 'A' + counter;
            for(int i = 0; i < 10; i++)
            {
                for(int j = 0; j < 10; j++)
                {
                    printf("%c ", random_walk[i][j]);
                }
                printf("\n");
            }
        }
        else if(number == 3 && j < 9 && (random_walk[i][j+1] == '.'))
        {
            //printf("Hej3\n");
            j++;
            counter++;
            random_walk[i][j] = 'A' + counter;
            for(int i = 0; i < 10; i++)
            {
                for(int j = 0; j < 10; j++)
                {
                    printf("%c ", random_walk[i][j]);
                }
                printf("\n");
            }
        }
        
        if(((random_walk[i+1][j] != '.') || (i == 9)) &&
           ((random_walk[i-1][j] != '.') || (i == 0)) &&
           ((random_walk[i][j+1] != '.') || (j == 9)) &&
           ((random_walk[i][j-1] != '.') || (j == 0)))
        {
            exit(EXIT_SUCCESS);
        }
    
    
       
        

    
    
        
        
    }
    
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%c ", random_walk[i][j]);
        }
        printf("\n");
    }
    return 0;
}
