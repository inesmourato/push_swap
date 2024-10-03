#include "push_swap.h"

t_stack_node	sort3(t_stack_node **stack)
{
	t_stack_node	*first;
	t_stack_node	*last;

	first = *stack;
	last = *stack;
	while (last->next)
		last = last->next;
	if ((first->nbr > first->next->nbr) && (last->nbr > first->nbr))
		swap(stack, 'a');
	else if ((first->nbr > last->nbr) && (first->next->nbr > first->nbr))
		reverse_rotate(stack, 'a');
	else if ((first->nbr < last->nbr) && (last->nbr < first->next->nbr))
	{
		swap(stack, 'a');
        	rotate(stack, 'a');
        }
	else if ((first->nbr > last->nbr) && (first->nbr > first->next->nbr)
		&& (last->nbr < first->next->nbr))
	{
		swap(stack, 'a');
		reverse_rotate(stack, 'a');
	}
	else
	        rotate(stack, 'a');
	return (**stack);
}
