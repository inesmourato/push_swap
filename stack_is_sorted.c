#include "push_swap.h"

int stack_is_sorted(t_stack_node *stack)
{
        int data = stack->nbr;
        int next_data = stack->next->nbr;
        
        if(!stack || !stack->next)
                return(1);
        while(stack->next)
        {
                if(data > next_data)
                        return(0); 
                stack = stack -> next;
        }
        return(1);
}