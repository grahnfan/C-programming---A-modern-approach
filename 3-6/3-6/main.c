//
//  main.c
//  3-6
//
//  Created by Erik Grahn on 2017-04-21.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter two fractions separated by a plus sign: ");
    
    int first, second, third, fourth;
    scanf("%d/%d+%d/%d", &first, &second, &third, &fourth);
    
    printf("The sum is %d/%d\n", first * fourth + second * third, second*fourth );
    
    return 0;
}
