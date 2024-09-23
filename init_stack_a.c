#include "push_swap.h"


/*int	ft_atoi(const char *str)
{
	int	i;
	int	number;
	int	parity;

	parity = 1;
	number = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			parity *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - 48);
		i++;
	}
	return (number * parity);
}*/

int is_valid_input(char *str)
{
    int i;

    i = 0;
    if(str[i] == '-' || str[i] == '+')
        i++;
    while(str[i] != '\0')
    {
        if(str[i] < '0' || str[i] > '9')
            return(0);
        i++;
    }
    return(1);
}

int has_duplicates(t_stack_node *stack, int num)
{
    while(stack != NULL)
    {
        if(stack->nbr == num)
            return(1);
        stack = stack->next; //this is how we iterate loops in lists
    }
    return(0);
}

t_stack_node *create_node(int *num)
{
    t_stack_node    *new_node;

    if(!num)
        error_exit("error");
    new_node = malloc(sizeof(t_stack_node));
    if(new_node == NULL)
        error_exit("error");
    new_node->nbr = *num;
    new_node->next = NULL;
    new_node->prev = NULL;
    return(new_node);
}

void append_to_stack(t_stack_node **stack, t_stack_node *new_node)
{
    t_stack_node    *last;

    if(*stack == NULL)
    {
        *stack = new_node;
        exit(1);
    }
    last = *stack;
    while(last->next != NULL)
    {
        last = last->next;
    }
    last->next = new_node;
    new_node->prev = last;
}

void init_stack_a(t_stack_node **a, char **argv)
{
    int i;
    int num;
    t_stack_node    *new_node;

    i = 1;
    while(argv[i] != NULL)
    {
        if(!is_valid_input(argv[i]))
        {
            free_stack(*a);
            error_exit("error");
             exit(1);
        }
        num = ft_atoi(argv[i]);
        if(has_duplicates(*a, num))
        {
           free_stack(*a);
           error_exit("error");
        }
        new_node = create_node(&num);
        append_to_stack(a, new_node);
        i++;
    }

}

void print_stack(t_stack_node *stack)
{
    while (stack != NULL)
    {
        printf("%d ", stack->nbr);
        
        stack = stack->next;
    }
    printf("\n");
}







/*
[X] check if input is valid
[X] str to long
[] check duplicates
[] create nodes
[] free stack for errors
*/