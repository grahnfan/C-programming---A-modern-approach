//
//  main.c
//  5-3
//
//  Created by Erik Grahn on 2017-04-23.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    //TODO insert original commissioner
    
    printf("Enter the number of shares and price per share: ");
    
    int number_shares, price_share, commission;
    
    scanf("%d %d", &number_shares, &price_share);
    
    if(number_shares < 2000)
    {
        commission = 33 + (3 * price_share);
    }
    else if(number_shares >= 2000)
    {
        commission = 33 + (2 * price_share);
    }
    printf("Commission rate: $%d\ns", commission);
    return 0;
}
