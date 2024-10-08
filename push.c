#include "push_swap.h"

 void	push_a(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node	*temp;

	if (!stack_b || !*stack_b)
		error_exit();
	if (!stack_a || !*stack_a)
	{
		*stack_a = *stack_b;
		*stack_b = (*stack_b)->next;
		(*stack_a)->next = NULL;
	}
	else
	{
		temp = *stack_b;
		*stack_b = (*stack_b)->next;
		temp->next = *stack_a;
		*stack_a = temp;
	}
	write(1, "pa\n", 3);
}

 void	push_b(t_stack_node **stack_a, t_stack_node **stack_b)
{
	t_stack_node *temp;

	if (!stack_a || !*stack_a)
		error_exit();
	if (!stack_b || !*stack_b)
	{
		*stack_b = *stack_a;
		*stack_a = (*stack_a)->next;
		(*stack_b)->next = NULL;
	}
	else
	{
		temp = *stack_a;
		*stack_a = (*stack_a)->next;
		temp->next = *stack_b;
		*stack_b = temp;
	}
	write(1, "pb\n", 3);
}