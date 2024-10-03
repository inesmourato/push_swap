#include "push_swap.h"

void	push(t_stack_node **stack_a, t_stack_node **stack_b, char c)
{
	t_stack_node *temp;

	if (!stack_a || !*stack_a)
		error_exit();

	temp = *stack_a;
	*stack_a = (*stack_a)->next;
	temp->next = *stack_b;
	*stack_b = temp;
	if (c == 'a')
		write(1, "pa\n", 3);
	else if (c == 'b')
		write(1, "pb\n", 3);
}