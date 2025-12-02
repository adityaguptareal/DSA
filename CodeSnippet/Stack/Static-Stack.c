#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define max 5

struct stack
{
    int arr[max];
    int top;
};

void init(struct stack *s)
{
    s->top = -1;
};

bool isEmpty(struct stack *s)
{
    if (s->top == -1)
    {
        return true;
    }
    return false;
}

bool isFull(struct stack *s)
{
    if (s->top == max - 1)
    {
        return true;
    }
    return false;
}

void push(int a, struct stack *s)
{
    if (isFull(s))
    {
        printf("Stack is full");
        return;
    }
    s->top++;
    s->arr[s->top] = a;
}

void pop(int a, struct stack *s)
{
    if (isEmpty(s))
    {
        printf("Stack is Empty");
        return;
    }
    s->top--;
}

int peek(struct stack *s)
{
    if (s->top == -1)
    {
        printf("Stack is Empty");
        return 0;
    }
    return s->arr[s->top];
}

int main()
{
    // Implementation of stack using array
    struct stack s;
    init(&s);
    push(7, &s);
    push(6, &s);
    push(5, &s);
    push(4, &s);
    printf("%d", peek(&s));
}