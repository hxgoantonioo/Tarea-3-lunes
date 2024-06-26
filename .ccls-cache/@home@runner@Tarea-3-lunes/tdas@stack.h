#ifndef STACK_H
#define STACK_H
#include "list.h"

typedef List Stack;

Stack *stack_create() { return list_create(); }

void stack_push(Stack *stack, void *data) { list_pushFront(stack, data); }

void *stack_top(Stack *stack) { return list_first(stack); }

void *stack_pop(Stack *stack) { return list_popFront(stack); }

void stack_clean(Stack *stack) { list_clean(stack); }

bool stack_is_empty(Stack *stack) {
    return stack_top(stack) == NULL;
}

#endif /* STACK_H */