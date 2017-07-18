//
//  main.c
//  6-8
//
//  Created by Erik Grahn on 2017-05-04.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter number of days in month: ");
    
    int days, starting_day;
    int week = 9;
    
    scanf("%d", &days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);
    
    switch (starting_day) {
        case 1:
            break;
        case 2:
            printf("   ");
            break;
        case 3:
            printf("      ");
            break;
        case 4:
            printf("         ");
            break;
        case 5:
            printf("            ");
            break;
        case 6:
            printf("               ");
            break;
        case 7:
            printf("                  ");
            break;
        default:
            break;
    }
    
    
    for(int i = 1; i <= days; i++)
    {
        if(i == (week - starting_day))
        {
            printf("\n");
            week += 7;
        }
        printf("%3d", i);
     
        
    }
    
    printf("\n");
    return 0;
}
