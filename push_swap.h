#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <unistd.h>


typedef struct s_stack_node
{
        int     nbr;
        int     index;
        int     cost;
        bool    above_median;
        bool    cheapest;
        struct  s_stack_node    *target_node;
        struct  s_stack_node    *next;
        struct  s_stack_node    *prev;       
}        t_stack_node;

int is_valid_input(char *str);
int has_duplicates(t_stack_node *stack, int num);
t_stack_node *create_node(int *num);
void append_to_stack(t_stack_node **stack, t_stack_node *new_node);
void init_stack_a(t_stack_node **a, char **argv);
void print_stack(t_stack_node *stack);

//handle errors
void free_stack(t_stack_node *stack);
void error_exit(const char *message);

//stack init

//nodes init

//stack utils

//commands

//algorithms

#endif