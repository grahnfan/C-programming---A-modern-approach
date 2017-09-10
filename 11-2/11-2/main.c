//
//  main.c
//  5-8
//
//  Created by Erik Grahn on 2017-04-25.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);


int main(int argc, const char * argv[]) {
    // insert code here...
    
    int hour, minute, total_minutes, departure, arrival;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);
    
    total_minutes = hour * 60 + minute;
    
    if(total_minutes >= (8 * 60) && total_minutes < (9 * 60 + 43))
    {
        if(total_minutes - (8 * 60) < (9 * 60 + 43) - total_minutes)
        {
            departure = 8 * 60;
            arrival = 10 * 60 + 16;
        }
        else
        {
            departure = 9 * 60 + 43;
            arrival = 11 * 60 + 52;
        }
    }
    else if(total_minutes >= (9 * 60 + 43) && total_minutes < (11 * 60 + 19))
    {
        if(total_minutes - (9 * 60 + 43) < (11 * 60 + 19) - total_minutes)
        {
            departure = 9 * 60 + 43;
            arrival = 11 * 60 + 52;
        }
        else
        {
            departure = 11 * 60 + 19;
            arrival = 13 * 60 + 31;
        }
    }
    else if(total_minutes >= (11 * 60 + 19) && total_minutes < (12 * 60 + 47))
    {
        if(total_minutes - (11 * 60 + 19) < (12 * 60 + 47) - total_minutes)
        {
            departure = 11 * 60 + 19;
            arrival = 13 * 60 + 31;
        }
        else
        {
            departure = 12 * 60 + 47;
            arrival = 15 * 60 + 0;
        }
    }
    
    else if(total_minutes >= (12 * 60 + 47) && total_minutes < (14 * 60 + 0))
    {
        if(total_minutes - (12 * 60 + 47) < (14 * 60 + 0) - total_minutes)
        {
            departure = 12 * 60 + 47;
            arrival = 15 * 60 + 0;
        }
        else
        {
            departure = 14 * 60 + 0;
            arrival = 16 * 60 + 8;
        }
    }
    
    else if(total_minutes >= (14 * 60 + 0) && total_minutes < (15 * 60 + 45))
    {
        if(total_minutes - (14 * 60 + 0) < (15 * 60 + 45) - total_minutes)
        {
            departure = 14 * 60;
            arrival = 16 * 60 + 8;
        }
        else
        {
            departure = 15 * 60 + 45;
            arrival = 17 * 60 + 55;
        }
    }
    
    else if(total_minutes >= (15 * 60 + 45) && total_minutes < (19 * 60 + 0))
    {
        if(total_minutes - (15 * 60 + 45) < (19 * 60 + 0) - total_minutes)
        {
            departure = 15 * 60 + 45;
            arrival = 17 * 60 + 55;
        }
        else
        {
            departure = 19 * 60 + 0;
            arrival = 21 * 60 + 20;
        }
    }
    
    else if(total_minutes >= (19 * 60 + 0) && total_minutes < (21 * 60 + 45))
    {
        if(total_minutes - (19 * 60) < (21 * 60 + 45) - total_minutes)
        {
            departure = 19 * 60;
            arrival = 21 * 60 + 20;
        }
        else
        {
            departure = 21 * 60 + 45;
            arrival = 23 * 60 + 58;
        }
    }
    else
    {
        if(total_minutes - (8 * 60) < (21 * 60 + 45) - total_minutes)
        {
            departure = 8 * 60;
            arrival = 10 * 60 + 16;
        }
        else
        {
            departure = 21 * 60 + 45;
            arrival = 23 * 60 + 58;
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

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    
}
