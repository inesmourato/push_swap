#include "push_swap.h"

int stack_is_sorted(t_stack_node *stack)
{
        t_stack_node    *temp;

        temp = stack;
        if(!stack || !stack->next)
                return(1);
        while(stack->next)
        {
                if(stack->nbr > stack->next->nbr)
                        return(0);
                stack = stack->next;
        }
        return(1);
}
