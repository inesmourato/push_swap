#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <limits.h>
# include <stdbool.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_stack_node
{
	int					nbr;
	int					index;
	int					cost;
	bool				above_median;
	bool				cheapest;
	struct s_stack_node	*target_node;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}						t_stack_node;

// init_stack
int						is_digit(char *str);
int						has_duplicates(t_stack_node *stack, int num);
t_stack_node			*create_node(int num);
void					append_to_stack(t_stack_node **stack, int content);
void					init_stack_a(t_stack_node **a, char **argv,
							int argv_index);

void					print_stack(t_stack_node *stack);
long					ft_atol(const char *str);
int						stack_is_sorted(t_stack_node *stack);
int						stack_size(t_stack_node **lst);

// handle errors
void					free_stack(t_stack_node *stack);
void					error_exit(void);
// stack init

// nodes init

// stack utils

// commands
void					swap(t_stack_node **stack, char c);
void					reverse_rotate(t_stack_node **stack, char c);
void					rotate(t_stack_node **stack, char c);

void					push_b(t_stack_node **stack_a, t_stack_node **stack_b);
void					push_a(t_stack_node **stack_a, t_stack_node **stack_b);

// algorithms
t_stack_node			sort3(t_stack_node **stack);

t_stack_node *target_node (t_stack_node *stack_a, t_stack_node *stack_b);


#endif