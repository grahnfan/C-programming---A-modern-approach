//
//  main.c
//  5-8
//
//  Created by Erik Grahn on 2017-04-25.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>
#include <limits.h>

int main(int argc, const char * argv[]) {
    // insert code here...
    
    int departuresTimes[] = {8*60+0, 9*60+43, 11*60+19, 12*60+47, 14*60+0, 15*60+45, 19*60+0, 21*60+45};
    int arrivalTimes[] = {10*60+16, 11*60+52, 13*60+31, 15*60+0, 16*60+8, 17*60+55, 21*60+20, 23*60+58};
    
    
    
    int hour, minute, total_minutes;
    int departure = 0;
    int arrival = 0;

    
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    
    total_minutes = hour * 60 + minute;
    
    
    for (int i = 0; i < (sizeof(departuresTimes)/sizeof(departuresTimes[0]))-1; i++)
    {

        if(total_minutes >= departuresTimes[i] && total_minutes < departuresTimes[i+1])
        {
            
            
            if(total_minutes - departuresTimes[i] < departuresTimes[i+1] - total_minutes)
            {
                departure = departuresTimes[i];
                arrival = arrivalTimes[i];
            }
            else
            {
                departure = departuresTimes[i+1];
                arrival = arrivalTimes[i+1];
            }
            
        }
    }
    
    if(departure > 12 * 60)
    {
        printf("Closest departure time is %d:%.2d p.m., ", departure / 60, departure % 60);
        
        if(arrival > 12 * 60)
            printf("arriving at %d:%.2d p.m.\n", arrival / 60, arrival % 60);
        else
            printf("arriving at %d:%.2d a.m.\n", arrival / 60, arrival % 60);
    }
    else
    {
        printf("Closest departure time is %d:%.2d a.m., ", departure / 60, departure % 60);
        
        if(arrival > 12 * 60)
            printf("arriving at %d:%.2d p.m.\n", arrival / 60, arrival % 60);
        else
            printf("arriving at %d:%.2d a.m.\n", arrival / 60, arrival % 60);
    }
    
    
    return 0;
}
