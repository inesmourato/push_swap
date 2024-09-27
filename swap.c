#include "push_swap.h"

void swap (t_stack_node **stack, char c)
{
        t_stack_node *temp;

        if(!(*stack) || !(*stack) -> next)
                error_exit();
        temp = *stack;
        *stack = (*stack)->next;
        temp->next = (*stack)->next;
        (*stack)->next = temp;
		if(c == 'a')
			write(1, "sa\n", 3);
		else if (c == 'b')
			write(1, "sb\n", 3);
		
}

/*void ss(t_stack_node **stack_a)
{
        swap(stack_a);
		swap(stack_b);
        write(1, "ss\n", 3);
}*/