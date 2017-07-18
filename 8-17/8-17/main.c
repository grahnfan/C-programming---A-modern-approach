//
//  main.c
//  8-17
//
//  Created by Erik Grahn on 2017-06-26.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int size = 0;
    
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    
    scanf("%d", &size);
    
    int square[size][size];
    
    for(int i = 0; i < size; i++)
    {
        for(int j = 0; j < size; j++)
        {
            square[i][j] = 0;
        }
    }
    
    square[0][(size-1)/2] = 1;
    

    int row = 0;
    int nextRow = 0;
    int nextCol = 0;
    int col = size/2;
    int counter = 1;
    
    while(counter <= (size * size))
    {
      
        
        square[row][col] = counter;
        
        if(row == 0)
            nextRow = size - 1;
        else
            nextRow = row - 1;
        
        if(col == size - 1)
            nextCol = 0;
        else
            nextCol = col + 1;
        
            
        if(square[nextRow][nextCol] != 0)
        {
                row++;
        }
        else
        {
            row = nextRow;
            col = nextCol;
        }
        counter++;
        

        
        for(int k = 0; k < size; k++)
        {
            for(int l = 0; l < size; l++)
            {
                printf("%2d ",square[k][l]);
            }
            printf("\n");
        }
        printf("\n");
        //printf("%d\n", counter);
    }
        
        

        
        

    

    
   

    
    
    
    
    return 0;
}
