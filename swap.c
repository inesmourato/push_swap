#include "push_swap.h"

void swap(t_stack_node **stack)
{
        t_stack_node *temp;

        if(!(*stack) || !(*stack) -> next)
                error_exit();
        temp = *stack;
        *stack = (*stack)->next;
        temp->next = (*stack)->next;
        (*stack)->next = temp;
}

void sa(t_stack_node **stack_a)
{
        swap(stack_a);
        write(1, "sa\n", 3);
}


int	lstsize(t_stack_node **stack)
{
	int	counter;

	counter = 0;
	if (!stack)
		error_exit();
	while ((*stack))
	{
		*stack = (*stack)->next;
		counter++;
	}
	return (counter);
}
