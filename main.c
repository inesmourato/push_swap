#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack_node	*a;
	int				argv_index;
	int				size;
	t_stack_node	*b;

	a = NULL;
	argv_index = 1;
	b = NULL;
	if (argc < 2 || (argc == 2 && !argv[1][0]))
		return (1);
	else if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		argv_index = 0;
	}
	init_stack_a(&a, argv, argv_index);
	print_stack(a);
	if (stack_is_sorted(a) == 1)
		printf("stack is sorted\n");
	else
		printf("stack is not sorted\n");
	size = stack_size(&a);
	if (stack_is_sorted(a) == 0)
	{
		if (size == 2)
		{
			swap(&a, 'a');
			print_stack(a);
		}
		else if (size == 3)
		{
			print_stack(a);
			sort3(&a);
			print_stack(a);
		}
		else
		{
			push_b(&a, &b);
			print_stack(b);
			print_stack(a);
			push_b(&a, &b);
                        print_stack(b);
			print_stack(a);
			push_b(&a, &b);
                        print_stack(b);
			print_stack(a);
                        push_b(&a, &b);
                        print_stack(b);
			print_stack(a);
                        target_node(a, b);
		}
	}
	// free_stack();
	return (0);
}

/*

[X]declare pointers 	printf("append to stack feito");
to 2 linked lists (stack a and b)
		[X]set both pointers to NULL to avoid undefined behaviour and indicate im starting with empty stacks

[x] handle input count errors. Argc must be 2 or more and second input must not be empty
		[x]if input erros, return error

[] handle both cases of input (numbers & strings)
		[]if input is a string, call split to split the substrings

[x] initialize stack a by appending each input number as a node to stack a
		[x] handle int overflow,
			duplicates and syntax errors (only contains digits, '-', '+')
				[x] if errors found, free stack a and return error
		[x] check for each input, if it's a long integer
				[x] if input is a string convert it to a long int
		[x] append the nodes to satck a

[x] check if stack a is sorted
		[] if not, implement the algorithm
				[] check for 2 numbers
						[] if so, swap
				[] check for 3 numbers
						[]if so, implement 'sort three' algorithm
				[] check if more than 3 numbers
						[] if so, implement the Turk Algorithm



util functions:
- to handle errors
- operations
- stack lenght
- last node
- min and max nodes


*/