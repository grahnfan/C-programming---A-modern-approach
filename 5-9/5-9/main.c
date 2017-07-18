//
//  main.c
//  5-9
//
//  Created by Erik Grahn on 2017-04-26.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    int first_mm, first_dd, first_yy, second_mm, second_dd, second_yy;

    
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d", &first_mm, &first_dd, &first_yy);
    
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d", &second_mm, &second_dd, &second_yy);
    
    if(first_yy < second_yy)
    {
        printf("%d/%d/%d is earlier than %d/%d/%.2d", first_mm, first_dd, first_yy, second_mm, second_dd, second_yy);
    }
    else if (first_yy == second_yy)
    {
        if(first_mm < second_mm)
        {
            printf("%d/%d/%d is earlier than %d/%d/%.2d", first_mm, first_dd, first_yy, second_mm, second_dd, second_yy);
        }
        else if(first_mm == second_mm)
        {
            if(first_dd < second_dd)
            {
                printf("%d/%d/%d is earlier than %d/%d/%.2d", first_mm, first_dd, first_yy, second_mm, second_dd, second_yy);
            }
            else
            {
                  printf("%d/%d/%d is earlier than %d/%d/%.2d", second_mm, second_dd, second_yy, first_mm, first_dd, first_yy);
            }
        }
        else
        {
           printf("%d/%d/%d is earlier than %d/%d/%d.2", second_mm, second_dd, second_yy, first_mm, first_dd, first_yy);
        }
    }
    else
    {
        printf("%d/%d/%d is earlier than %d/%d/%d.2", second_mm, second_dd, second_yy, first_mm, first_dd, first_yy);

    }
        
    
    
    
    return 0;
}
