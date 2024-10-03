#include "push_swap.h"

void rotate(t_stack_node **stack, char c)
{
        t_stack_node    *first;
        t_stack_node    *last;

        if(!stack || !(*stack) || !(*stack)->next)
                error_exit();
        first = *stack;
        last = *stack;
        while(last->next)
                last=last->next;
        *stack = first->next;
        first->next = NULL;
        last->next = first;
        if(c == 'a')
		write(1, "ra\n", 3);
	else if (c == 'b')
		write(1, "rb\n", 3);
}

// void rr (t_stack_node **stack)
// {
//         rotate(stack, 'a');
//         rotate(stack, 'b');
//         write(1, "rr\n", 3);
// }
