#include "push_swap.h"

void free_stack(t_stack_node *stack)
{
    t_stack_node *temp;

    while(stack)
    {
        temp = stack;
        stack = stack -> next;
        free(temp);
    }
}