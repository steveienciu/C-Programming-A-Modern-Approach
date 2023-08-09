/* stack that checks whether user entered series of parentheses and/or braces */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
char contents[STACK_SIZE];
int top = 0;

void stack_overflow(void);
void stack_underflow(void);
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char ch);
void pop(void);
void not_proper(void);

int main(void)
{
    char ch;
    int flag = 0;

    for (int i = 0; i < STACK_SIZE; ++i) {
        contents[i] = '.';
    }

    printf("\nEnter parentheses and/or braces: ");
    for (; top < STACK_SIZE;) {
        ch = getchar();
        switch(ch) {
            case '(': case '{':
                push(ch);
                break;
            case ')':
                if (contents[top - 1] == '(') {
                    pop();
                    break;
                }
                else {
                    not_proper();
                }
            case '}':
                if (contents[top - 1] == '{') {
                    pop();
                    break;
                }
                else {
                    not_proper();
                }
            case '\n':
                flag = 1;
                break;
            default: 
                flag = 2;
                break;
        }
        
        if (flag == 1) {
            break;
        }
        else if (flag == 2) {
            printf("Improper character inputted\n");
            return 0;
        }
    }

    if (is_empty()) {
        printf("Parentheses/braces are nested properly\n");
        return 0;
    }
}

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
    if (is_full()) {
        stack_overflow();
    }
    else {
        contents[top++] = ch; // inputs the character into array then increments top
    }
}

void pop(void)
{
    if (is_empty()) {
        stack_underflow();
    }
    else {
        contents[--top];
    }
}

void stack_overflow(void)
{
    printf("Stack overflow.\n");
    exit(1);
}

void stack_underflow(void)
{
    printf("Stack underflow.\n");
    exit(1);
}

void not_proper(void)
{
    printf("Improper nesting.\n");
    exit(1);
}
