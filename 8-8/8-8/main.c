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
    int high_score[5] = {0};
    int low_score[5] = {100, 100, 100, 100, 100};
    
    for(int i = 0; i < 5; i++)
    {
        
        
        printf("Enter quiz grades for student %d: ", i + 1);
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
            
            if(number[j][i] > high_score[i])
            {
                high_score[i] = number[j][i];
            }
            if(number[j][i] < low_score[i])
            {
                low_score[i] = number[j][i];
            }
            
            
        }
        
    }
    
    
    
    
    for(int i = 0; i < 5; i++)
    {
        printf("Total score student %d: ", i+1);
        
        printf("%d \n", row[i]);
    }
    
    
    for(int i = 0; i < 5; i++)
    {
        printf("Average score student %d: ", i+1);
        
        printf("%.2f \n", (float)row[i]/5);
    }
    
    for(int i = 0; i < 5; i++)
    {
        printf("Average score quiz %d: ", i+1);
        printf("%.2f \n", (float)column[i] / 5);
    }
    
    for(int i = 0; i< 5; i++)
    {
        printf("Lowest score quiz %d :", i+1);
        printf("%d \n", low_score[i]);
        
    }
    
    for(int i = 0; i< 5; i++)
    {
        printf("Highest score quiz %d :", i+1);
        printf("%d \n", high_score[i]);
        
    }
    
    
   
    
    
    return 0;
}
