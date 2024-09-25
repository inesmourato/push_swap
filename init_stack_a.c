#include "push_swap.h"

int	is_valid_input(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	has_duplicates(t_stack_node *stack, int num)
{
	while (stack != NULL)
	{
		if (stack->nbr == num)
			return (1);
		stack = stack->next; // this is how we iterate loops in lists
	}
	return (0);
}

t_stack_node	*create_node(int num)
{
	t_stack_node	*new_node;

	if (!num)
		error_exit();
	new_node = malloc(sizeof(t_stack_node));
	if (new_node == NULL)
		error_exit();
	new_node->nbr = num;
	new_node->next = NULL;
	new_node->prev = NULL;
	return (new_node);
}

void	append_to_stack(t_stack_node **stack, int content)
{
	t_stack_node	*new_node;
	t_stack_node	*temp;

	new_node = create_node(content);
	temp = *stack;
	if (*stack == NULL)
	{
		*stack = new_node;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
	}
}

void	init_stack_a(t_stack_node **a, char **argv)
{
	int				i;
	int				num;
	t_stack_node	*new_node;

	i = 1;
	while (argv[i] != NULL)
	{
		if (!is_valid_input(argv[i]))
		{
			free_stack(*a);
			error_exit();
		}
		num = ft_atol(argv[i]);
		if (has_duplicates(*a, num))
		{
			free_stack(*a);
			error_exit();
		}
		new_node = create_node(num);
		append_to_stack(a, num);
		i++;
	}
}

void	print_stack(t_stack_node *stack)
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