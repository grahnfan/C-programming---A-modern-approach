//
//  main.c
//  5-10
//
//  Created by Erik Grahn on 2017-04-26.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int grade, temp;
    printf("Enter numerical grade: ");
    
    scanf("%d", &grade);
    temp = grade;
    
    grade /= 10;
    
    switch (grade) {
            
        
        case 1: case 2: case 3: case 4: case 5:
            printf("Letter grade: F\n");
            break;
        case 6:
            printf("Letter grade: D\n");
            break;
        case 7:
            printf("Letter grade: C\n");
            break;
        case 8:
            printf("Letter grade: B\n");
            break;
        case 9:
            printf("Letter grade: A\n");
            break;
        case 10:
            if(temp % 10 != 0)
                printf("Error!\n");
            else
                printf("Letter grade: A\n");
            break;
    
        default:
               printf("Error!\n");
            break;
    }
    
    return 0;
}
