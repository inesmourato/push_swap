#include "push_swap.h"

t_stack_node swap(t_stack_node *first)
{
        t_stack_node *temp;
        t_stack_node *second;

        temp = first;
        second = first->next;
        first = second;
        temp->next 
}