#include "push_swap.h"

int	stack_size (t_stack_node **stack)
{
	int	counter;
	t_stack_node	*temp;

	counter = 1;
	if (!stack)
		error_exit();
	temp = *stack;
	while ((temp->next))
	{
		counter++;
		temp = temp->next;
	}
	return (counter);
}

int stack_is_sorted(t_stack_node *stack)
{
        t_stack_node    *temp;

        temp = stack;
        if(!stack || !stack->next)
                return(1);
        while(temp->next)
        {
                if(temp->nbr > temp->next->nbr)
                        return(0);
                temp = temp->next;
        }
        return(1);
}
void free_stack(t_stack_node *stack)
{
    t_stack_node *temp;

    while(stack)
    {
        temp = stack;
        free(temp);
        stack = stack -> next;
    }
}
void error_exit(void) 
{
   write(2, "error\n", 6);
   exit(0);
}

long ft_atol (const char *str)
{
    long result;
    int i;
    int sign;

    result = 0;
    i = 0;
    sign = 1;

    while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
        i++;
    if(str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if(str[i] == '+')
        i++;
    while(str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + str[i] - 48;
        if(result * sign > INT_MAX || result * sign < INT_MIN)
        {
                error_exit();
        }
        
        i++;
    }
    return(result * sign);
}