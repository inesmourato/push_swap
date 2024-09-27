#include "push_swap.h"

int	is_digit(char *str)
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
	
	if (*stack == NULL)
		*stack = new_node;
	else
	{
                temp = *stack;
		while (temp->next)
			temp = temp->next;
		temp->next = new_node;
                new_node->prev = temp;
        }
}

void	init_stack_a(t_stack_node  **a, char **argv, int argv_index)
{
	int				i;
	int				num;

	i = argv_index;
	while (argv[i] != NULL)
	{
		if (!is_digit(argv[i]))
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
		append_to_stack(a, num);
		i++;
	}
}

void	print_stack(t_stack_node *stack)
{
        t_stack_node *temp;

        temp = stack;
	while (temp != NULL)
	{
		printf("%d ", temp->nbr);
		temp = temp->next;
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