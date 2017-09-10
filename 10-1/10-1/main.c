//
//  main.c
//  10-1
//
//  Created by Erik Grahn on 2017-07-08.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

int stack_overflow(void);
int stack_underflow(void);

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    return top == 0;
}

bool is_full(void)
{
    return top == STACK_SIZE;
}

void push(char ch)
{
    if(is_full())
        stack_overflow();
    contents[top++] = ch;
}

char pop(void)
{
    if(is_empty())
        stack_underflow();
    return contents[--top];
}

 int stack_overflow(void)
 {
    printf("Stack overflow\n");
    exit(EXIT_FAILURE);
 }

int stack_underflow(void)
{
    exit(EXIT_FAILURE);
}

void nesting(void)
{
    
    printf("The parantheses/braces are not nested properly\n");

}



int main(int argc, const char * argv[]) {
    // insert code here...
    char ch;
    printf("Enter parantheses and/or braces: ");
    
    while(ch != '\n')
    {
        ch = getchar();
        
        if(ch == '(' || ch == '{')
        {
            push(ch);
        }
        else if(ch == ')' && pop() != '(')
        {
            nesting();
            break;
        }
        else if(ch == '}' && pop() != '{')
        {
            nesting();
            break;
        }
    }
    
    if(is_empty())
        printf("Parantheses/braces are matched\n");
    else
        printf("Parantheses/braces are not matched\n");
    
    
    return 0;
}
