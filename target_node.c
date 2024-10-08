#include "push_swap.h"

t_stack_node *target_node (t_stack_node *stack_a, t_stack_node *stack_b) 
{
    t_stack_node    *closest;
    t_stack_node    *max_node;
    int diff;
    int closest_diff;
    max_node = NULL;
    closest = NULL;
    closest_diff = INT_MAX;

    while(stack_b != NULL)
    {
        if(max_node == NULL || stack_b->nbr > max_node->nbr)
            max_node = stack_b;
        if(stack_a->nbr > stack_b->nbr)
        {
            diff = stack_a->nbr - stack_b->nbr;
            if(diff < closest_diff)
            {
                closest_diff = diff;
                closest = stack_b;
            }
        }
        stack_b = stack_b->next;
    }
    if(closest == NULL)
        closest = max_node;
    return(closest);
    printf("%d", closest->nbr);
}
