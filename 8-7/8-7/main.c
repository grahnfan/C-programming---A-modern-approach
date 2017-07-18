//
//  main.c
//  8-7
//
//  Created by Erik Grahn on 2017-06-01.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int number[5][5];
    int row[5] = {0};
    int column[5] = {0};
    
    for(int i = 0; i < 5; i++)
    {
        
        
        printf("Enter row %d: ", i + 1);
        scanf("%d %d %d %d %d", &number[i][0], &number[i][1], &number[i][2], &number[i][3],&number[i][4]);
    }
    
    /*for(int i = 0; i < 5; i++)
    {
        printf("%d ", number[0][i]);
    }*/
        
    for(int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            row[i] += number[i][j];
            column[i] += number[j][i];
        }
        
    }
    
    
    
    printf("Row totals: ");
    for(int i = 0; i < 5; i++)
    {
        
        printf("%d ", row[i]);
    }
    
    printf("\nColumn totals: ");
    for(int i = 0; i < 5; i++)
    {
        
        printf("%d ", column[i]);
    }
    
    return 0;
}
