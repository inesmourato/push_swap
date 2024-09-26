#include "push_swap.h"

void free_stack(t_stack_node *stack)
{
    t_stack_node *temp;

    while(stack)
    {
        temp = stack;
        free(temp);
        stack = stack -> next;
    }
}