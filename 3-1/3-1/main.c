//
//  main.c
//  3-1
//
//  Created by Erik Grahn on 2017-04-20.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a date (mm/dd/yyyy): ");
    
    int year;
    int month;
    int day;
    
    scanf("%d/%d/%d", &month, &day, &year);
    
    printf("You entered the date %d%.2d%.2d\n", year, month, day);
    return 0;
}
