//
//  main.c
//  6-10
//
//  Created by Erik Grahn on 2017-05-08.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int mm, dd, yy;
    int earliest_mm, earliest_dd, earliest_yy;
    
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &earliest_mm, &earliest_dd, &earliest_yy);
    
    do
    {
    printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &mm, &dd, &yy);
        
        if(!mm && !dd && !yy)
            break;
        if(yy < earliest_yy)
        {
            earliest_yy = yy;
            earliest_mm = mm;
            earliest_dd = dd;
        }
        else if(mm < earliest_mm && yy <= earliest_yy)
        {
            earliest_yy = yy;
            earliest_mm = mm;
            earliest_dd = dd;
        }
        else if(dd < earliest_dd && mm <= earliest_mm && yy <= earliest_yy)
        {
            earliest_yy = yy;
            earliest_mm = mm;
            earliest_dd = dd;
        }
            
        
    }while(mm && dd && yy);
    
    printf("%d/%d/%.2d is the earliest date\n", earliest_mm, earliest_dd, earliest_yy);
    
    return 0;
}
