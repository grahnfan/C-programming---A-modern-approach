//
//  main.c
//  9-1
//
//  Created by Erik Grahn on 2017-07-05.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>


void selection_sort(int[], int);

int main(int argc, const char * argv[]) {
    // insert code here...
    printf("Enter a series of integers: ");
    
    int numbers[5];
    
    
    for(int i = 0; i < 5; i++)
    {
        scanf("%d", &numbers[i]);
    }
    
    
    selection_sort(numbers, 5);
    
    
    printf("Sorted array: ");
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", numbers[i]);
    }
    
    printf("\n");
    return 0;
}

void selection_sort(int numbers[], int n)
{
    int tmp;
    
    for(int i = 0; i < 5; i++)
    {
        if(numbers[i] > numbers[i+1])
        {
            tmp = numbers[i];
            numbers[i] = numbers[i+1];
            numbers[i+1] = tmp;
            
        }
    }
    n--;
    if(n > 0)
        selection_sort(numbers, n);
}
