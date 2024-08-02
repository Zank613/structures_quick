// Stack in C99

#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct stack
{
    int top;
    int items[MAX];
};

struct stack *create_stack(void)
{
    struct stack *stack = malloc(sizeof(struct stack));
    if (!stack)
    {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }

    stack->top = -1;
    return stack;
}

int is_full(struct stack *stack)
{
    return stack->top == MAX - 1;
}

int is_empty(struct stack *stack)
{
    return stack->top == -1;
}

void push(struct stack *stack, int item)
{
    if (is_full(stack))
    {
        printf("Stack overflow.\n");
        return;
    }
    stack->items[++stack->top] = item;
}

int pop(struct stack *stack)
{
    if (is_empty(stack))
    {
        printf("Stack underflow.\n");
        return -1;
    }
    return stack->items[stack->top--];
}

int main(void)
{
    struct stack *stack = create_stack();
    push(stack, 10);
    push(stack, 11);
    push(stack, 12);

    printf("Popped item: %d\n", pop(stack));
    return 0;
}