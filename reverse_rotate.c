#include "push_swap.h"

void	reverse_rotate(t_stack_node **stack, char c)
{
	t_stack_node *last;
	t_stack_node *second_last;

	if (!stack || !(*stack) || !(*stack)->next)
		error_exit();

	last = *stack;
	second_last = NULL;

	while (last->next)
        {
                second_last = last;
                last = last->next;
        }
        second_last->next = NULL;
        last->next = *stack;
        *stack = last;
        if(c == 'a')
		write(1, "rra\n", 3);
	else if (c == 'b')
		write(1, "rrb\n", 3);
}