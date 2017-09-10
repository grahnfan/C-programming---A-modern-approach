//
//  main.c
//  10-7
//
//  Created by Erik Grahn on 2017-09-09.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

#define MAX_DIGITS 10
#define DIGIT_HEIGHT 3
#define DIGIT_WIDTH 3
#define DIGIT_SPACING 1
#define MAX_DIGITS_SPACE (MAX_DIGITS * (DIGIT_WIDTH + DIGIT_SPACING)) - DIGIT_SPACING
                            //0,1,2,3,4,5,6
const int segments[10][7] = {{1,1,1,1,1,1,0}, // 0
                             {0,1,1,0,0,0,0}, // 1
                             {1,1,0,1,1,0,1}, // 2
                             {1,1,1,1,0,0,1}, // 3
                             {0,1,1,0,0,1,1}, // 4
                             {1,0,1,1,0,1,1}, // 5
                             {1,0,1,1,1,1,1}, // 6
                             {1,1,1,0,0,0,0}, // 7
                             {1,1,1,1,1,1,1}, // 8
                             {1,1,1,1,0,1,1} // 9
};

//int test[10][] = {1,1,1,1,1,1,0};

char digits[4][MAX_DIGITS*4];

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

int main(int argc, const char * argv[]) {
    // insert code here...¨
    char ch;
    int position = 0;
    
    clear_digits_array();
    printf("Enter a number (up to 10 digits): ");
    while ((ch = getchar()) != '\n' && position < MAX_DIGITS_SPACE) {
        
        if (isdigit(ch)) {
            process_digit(ch - '0', position);
            position += DIGIT_WIDTH + DIGIT_SPACING;
        }
    }
    print_digits_array();
}

const int segment_grid_pos[7][2] = {
    /*  row  col | Segment | */
    {0,   1},  /* 0 */
    {1,   2},  /* 1 */
    {2,   2},  /* 2 */
    {2,   1},  /* 3 */
    {2,   0},  /* 4 */
    {1,   0},  /* 5 */
    {1,   1}   /* 6 */
};

void process_digit(int digit, int starting_col)
{
    int segment, segment_row_pos, segment_col_pos;
    
    for (segment = 0; segment < 7; segment++) {
        
        if (segments[digit][segment]) {
            segment_row_pos = segment_grid_pos[segment][0];
            segment_col_pos = segment_grid_pos[segment][1] + starting_col;
            digits[segment_row_pos][segment_col_pos] = segment % 3 == 0 ? '_' : '!';
        }
    }
}

void print_digits_array(void)
{
    int row, col;
    for (row = 0; row < DIGIT_HEIGHT; row++) {
        for (col = 0; col < MAX_DIGITS_SPACE; col++)
            printf("%c", digits[row][col]);
        
        printf("\n");
    }
}

void clear_digits_array(void)
{
    for(int row = 0; row < DIGIT_HEIGHT; row++)
    {
        for(int col = 0; col < MAX_DIGITS_SPACE; col++)
        {
            digits[row][col] = ' ';
        }
    }
}
