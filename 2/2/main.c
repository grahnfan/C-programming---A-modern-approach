//
//  main.c
//  2
//
//  Created by Erik Grahn on 2017-04-13.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>
#include <math.h>

int main(int argc, const char * argv[]) {
    
    int radius = 10;
    float volume = 0;
    
    volume = 4.0f / 3.0f * M_PI * (radius*radius*radius);
    printf("%.2f\n", volume);
    
    return 0;
}
