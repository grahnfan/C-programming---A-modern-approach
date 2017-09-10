//
//  main.c
//  10-6
//
//  Created by Erik Grahn on 2017-09-05.
//  Copyright © 2017 Erik Grahn. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define STACK_SIZE 100

int contents[STACK_SIZE];
int top = 0;
int operandCounter = 0;
int operatorCounter = 0;




//TODO implementera stack_overflow och stack_underflow

void stack_overflow()
{
    printf("Expression is too complex\n");
    exit(EXIT_FAILURE);
}

void stack_underflow()
{
    printf("Not enough operands in expression\n");
    exit(EXIT_FAILURE);
}

void make_empty(void)
{
    top = 0;
}

bool is_empty(void)
{
    if(top == 0)
        return true;
    else
        return false;
}

bool is_full(void)
{
    if(top == STACK_SIZE)
        return true;
    else
        return false;
}

void push(int i)
{
    if(is_full())
    {
        stack_overflow();
    }
    else
        contents[top++] = i;
}

int pop(char ch)
{
    if(is_empty()  || (operandCounter == operatorCounter))
    {
        stack_underflow();
        return 0;
    }
    else
    {
        //TODO implementera själva operationen här
		int tmp = 0;
        switch(ch)
        {
            case '+':
                //printf("%d %d\n", contents[top-2], contents[top-1]);
                 tmp = contents[top-2] + contents[top - 1];
				 // tmp = 3
				// contents = [1],[2],[3]
                break;
            case '-':
                tmp = contents[top-2] - contents[top - 1];
                break;
            case '/':
                tmp = contents[top-2] / contents[top - 1];
                break;
            case '*':
                tmp = contents[top-2] * contents[top - 1];
                break;
                
        
              
        }
		top -= 2;
		//printf("Top = %d\n", top);
		for(int i = top+1; i < STACK_SIZE; i++)
		{
			contents[i] = contents[i+2];
		}
		push(tmp);
        //printf("%d\n", contents[top-2]);
		
        return contents[top];
    }
}

int main(int argc, const char * argv[]) {
    // insert code here...
    
    char ch;
        printf("Enter an RPN expression: ");
    
    while(scanf(" %c", &ch))
    {
        //printf("Top = %d\n", top);
        
        if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
        {

			
            operatorCounter++;
            pop(ch);
            
        }
        else if(ch >= 48 && ch <= 57)
        {
            operandCounter++;
            ch -= 48;
            push(ch);
        }
        else if(ch == '=')
        {
			for(int i = 0; i < top; i++)
			{
				
				printf("%d ", contents[i]);
			}
			
			printf("\n");
			for(int i = 0; i < STACK_SIZE; i++)
			{
				contents[i] = 0;
			}
			top = 0;
			printf("Enter an RPN expression: ");
        }
		else
			break;
        
 
    }
    
    //printf("%d\n", operatorCounter);
    

    return 0;
}
