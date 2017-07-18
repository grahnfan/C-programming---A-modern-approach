//
//  main.c
//  3-3
//
//  Created by Erik Grahn on 2017-04-20.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter ISBN: ");
    
    int GSI_prefix, group_identifier, publisher_code, item_number, check_digit;
    
    scanf("%d-%d-%d-%d-%d", &GSI_prefix, &group_identifier, &publisher_code, &item_number, &check_digit);
    
    printf("GS1 prefix: %d\n", GSI_prefix);
    printf("Group identifier: %d\n", group_identifier);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);
    return 0;
}
