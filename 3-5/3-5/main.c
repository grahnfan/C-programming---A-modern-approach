//
//  main.c
//  3-5
//
//  Created by Erik Grahn on 2017-04-20.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter the numbers from 1 to 16 in any order: \n");
    
    int one, two,three, four, five, six, seven, eight, nine, ten, eleven, twelve, thirteen, fourteen, fithteen, sixteen;
    
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one, &two, &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fithteen, &sixteen);
    
    printf("%2d\t%2d\t%2d\t%2d\n", one, two, three, four);
    printf("%2d\t%2d\t%2d\t%2d\n", five, six, seven, eight);
    printf("%2d\t%2d\t%2d\t%2d\n", nine, ten, eleven, twelve);
    printf("%2d\t%2d\t%2d\t%2d\n", thirteen, fourteen, fithteen, sixteen);
    
    printf("Row sums:\t%d\t%d\t%d\t%d\n", (one + two + three + four), (five + six + seven + eight), (nine + ten + eleven + twelve), thirteen + fourteen + fithteen + sixteen);
    printf("Column sums:\t%d\t%d\t%d\t%d\n", (one + five + nine + thirteen), (two + six + ten + fourteen), (three + seven + eleven+ fithteen), (four + eight + twelve + sixteen));
    printf("Diagonal sums:\t%d\t%d\n", (one + six + eleven + sixteen), (thirteen + ten + seven + four));
    return 0;
}
