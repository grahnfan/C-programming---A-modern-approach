//
//  main.c
//  8-17
//
//  Created by Erik Grahn on 2017-06-26.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

void create_magic_square(int n, char magic_square[n][n]);
void print_magic_square(int n, char magic_square[n][n]);

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int size = 0;
    
    
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    
    scanf("%d", &size);
    char square[size][size];
    
    create_magic_square(size, square);
    print_magic_square(size, square);
    
    
    return 0;
}

void create_magic_square(int n, char magic_square[n][n])
{
    for(int i = 0; i < n; i++)
     {
         for(int j = 0; j < n; j++)
         {
             magic_square[i][j] = 0;
         }
  
     }
    magic_square[0][(n-1)/2] = 1;
    
    
    int row = 0;
    int nextRow = 0;
    int nextCol = 0;
    int col = n/2;
    int counter = 1;
    
    while(counter <= (n * n))
    {
        
        
        magic_square[row][col] = counter;
        
        if(row == 0)
            nextRow = n - 1;
        else
            nextRow = row - 1;
        
        if(col == n - 1)
            nextCol = 0;
        else
            nextCol = col + 1;
        
        
        if(magic_square[nextRow][nextCol] != 0)
        {
            row++;
        }
        else
        {
            row = nextRow;
            col = nextCol;
        }
        counter++;
    }
}

void print_magic_square(int n, char magic_square[n][n])
{
    for(int k = 0; k < n; k++)
    {
        for(int l = 0; l < n; l++)
        {
            printf("%2d ",magic_square[k][l]);
        }
        printf("\n");
    }
    printf("\n");
}


